#include "mavlink_container.h"

CMavlinkContainer::CMavlinkContainer()
{
    assign_table_name = "D:/MaRPAS/mavlink/assignment_table.log"
}

CMavlinkContainer::~CMavlinkContainer()
{
}

assign_table CMavlinkContainer::get_assign_table(
{
    std::ifstream f;
    f.open(logfile, std::ios::in);
    BOOST_CHECK(f);
    BOOST_CHECK(f.is_open());
    BOOST_CHECK(f.good());

    std::string line;
    std::map<std::string, std::string> table;    //holds contents of file
    while(getline(f, line))
    {
        std::stringstream ss(line); // stream to ease parsing lines
        std::string key;
        std::string v1;
        std::string v2;
    }
        if (ss >> key >> v1 >> v2 )
        {
                if (v1!="x")
                {
                    table[key] = v1;
                }
                else if (v2!="x")
                {
                    table[key] = v2;
                }
                else
                {
                    table[key] = "";
                }
        }
    }

    return table;
}
