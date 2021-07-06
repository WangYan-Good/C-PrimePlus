/*
编写一个程序，将一个文件复制到另一个文件中。让程序通过命令行获取文件名。如果文件无法打开，程序将指出这一点。
*/
#include "3.h"

int main( int argc, char *argv[] )
{
    std::cout << "argc:" << argc << std::endl;
    if( argv[1] == nullptr || argv[2] == nullptr )
    {
        std::cout << "not found any file name" << std::endl;
        return 0;
    }

    char * file = argv[1];
    char * copy_file = argv[2];

    std::ifstream fin;
    fin.open( file );

    std::ofstream fout;
    fout.open( copy_file );

    if( !fin.is_open() || !fout.is_open() )
    {
        std::cout << "file status incorrect" << std::endl;
        return 0;
    }

    char   ch;
    while( fin.get(ch) )
    {
        fout << ch;
    }

    fin.close();
    fout.close();
    return 0;
}