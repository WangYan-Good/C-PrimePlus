/*
 编写一个程序，将键盘输入（直到模拟的文件尾）复制到通过命令行指定的文件中。
*/
#include "2.h"

int main( int argc, char *argv[] )
{
    std::cout << "argc:" << argc << std::endl;
    if( argv[1] == nullptr )
    {
        std::cout << "not found any file name" << std::endl;
        return 0;
    }

    char * file_name = argv[1];
    std::ofstream fout;
    fout.open( file_name );
    if( !fout.is_open() )
    {
        std::cout << "open file err" << std::endl;
        return 0;
    }

    std::cout << "Please enter any input:";
    std::string str;
    while( getline(std::cin, str) && str.size() > 0 )
    {
        fout << str << std::endl;
    }
    std::cout << "Input over " << std::endl;
    fout.close();
    return 0;
}