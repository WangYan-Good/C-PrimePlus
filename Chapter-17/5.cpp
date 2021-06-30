#include "5.h"

void merge_set( std::string name, std::set <std::string> & name_list )
{
    name_list.insert(name);
}

void output( std::string name, std::ofstream & fout )
{
    fout << name << std::endl;
}