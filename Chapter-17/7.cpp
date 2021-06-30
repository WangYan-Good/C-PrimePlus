#include "7.h"

void ShowStr( std::string str )
{
    std::cout << str << std::endl;
}

void Store( std::string str, std::ofstream & fout)
{
    fout << str << std::endl;
}