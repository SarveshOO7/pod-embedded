#!/usr/bin/python3

import json

DATA_JSON_FILENAME = "data.json"
DATA_HEADER_FILENAME = "testdata.h"

def load_schema():
    schema = {}
    with open(DATA_JSON_FILENAME, "r") as f:
        schema = json.load(f)
    return schema

def build_data_struct(subStructNames):
    masterData = []
    for name in subStructNames:
        masterData.append({"name": name, "type": apply_naming_convention(name)})
    return build_struct("data", masterData)
    

def build_data_h(dataHStr):
    with open(DATA_HEADER_FILENAME, "w") as f:
        f.write(dataHStr)        
    return

def apply_naming_convention(name):
    return str(name) + "_t"

def build_struct(title, dataMembers):
    title = apply_naming_convention(title)
    structString = "typedef struct {} ".format(title)
    structString += "{\n"
    for member in dataMembers:
        structString += "\t{} {};\n".format(member["type"], member["name"])
    structString += "}"
    structString += " {};\n\n\n".format(title)
    return structString

def build_header():
    header = """
/****************************************************************************
*****************************************************************************
** Be very careful! This is an autogenerated file so any changes you
** make will likely be erased. If you want to add fields or other information
** add it to the data.json document, then run 'python datagen.py' to rebuild
** this file
****************************************************************************
****************************************************************************/\n\n
"""
    return header

def slap_a_comment_on_that_bad_boy():
    return "/***\n*\n* Describe this struct here\n*\n***/\n\n"

def main():
    schema = load_schema()
    print(schema)
    dataHStr = build_header()
    dataHStr += build_data_struct(schema.keys())
    for key, val in schema.items():
        dataHStr += slap_a_comment_on_that_bad_boy()
        dataHStr += build_struct(key, val)
    build_data_h(dataHStr)
#    print(dataHStr)
    return
    
if __name__ == "__main__":
    main()