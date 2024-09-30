"""
Created on Thu Jun  3 17:15:59 2021

@author: donk_al
"""

import xml.etree.ElementTree as ET
from os import listdir

tree = ET.parse('D:/MaRPAS/fcc/lib/mavlink/message_definitions/common.xml')
root = tree.getroot()


    
# for type_tag in root.findall('messages/message'):
#     message_name = type_tag.get('name')
#     message_id = type_tag.get('id')
#     print('ID: '+ str(message_id) +' Name: '+ str(message_name))
    
    
Files = listdir('D:/MaRPAS/fcc/lib/mavlink/common')

f = open("D:/MaRPAS/mavlink/python_scripts/mavlink_container.h", "w")




f.write("#ifndef MAVLINK_CONTAINER_HPP\n"
            "#define MAVLINK_CONTAINER_HPP\n")

f.write("\n")
for include_hpp in Files:
    if(include_hpp!="mavlink_container.hpp" and include_hpp!="common.h" ):
        f.write("#include \"" + include_hpp +"\"\n")



f.write("\n")
f.write("class CMavlinkContainer\n" )
f.write("{\n" )
f.write("public:\n"
        "//! constructor\n"
        "CMavlinkContainer();\n"
        "\n"
        "//! default destructor\n"
        "~CMavlinkContainer();\n")
f.write("\n" )
f.write("private:\n")
for type_tag in root.findall('messages/message'):
    message_name = type_tag.get('name').lower()
    f.write("\tmavlink_" +message_name+"_t "+message_name+"_m;\n")
    for elements_tag in type_tag.findall('field'):
      element_name = elements_tag.get('name')
      element_type = elements_tag.get('type')
      f.write("\t\t" +element_type+"\t "+element_name+"_m;\n")  


f.write("}\n" )

f.write("#endif //MAVLINK_CONTAINER_HPP\n")

f.close()

f = open("D:/MaRPAS/mavlink/python_scripts/mavlink_container.cpp", "w")
f.write("#include \"mavlink_container.h\"\n")
f.write("\n")
f.write("CMavlinkContainer::CMavlinkContainer()\n")
f.write("{\n")

f.write("}\n")
f.write("\n")
f.write("CMavlinkContainer::~CMavlinkContainer()\n")
f.write("{\n")

f.write("}\n")
f.close()


