/*
编写一个程序，它打开两个文本文件进行输入，打开一个文本文件进行输出。
该程序将两个输入文件中对应的行并接起来，并用空格分隔，然后将结果写入到输出文件中。
如果一个文件比另一个短，则将较长文件中余下的几行直接复制到输出文件中。
*/
#include "4.h"

int main( int argc, char * argv[] )
{
    std::cout << "argc:" << argc << std::endl;
    if( argv[1] == nullptr || argv[2] == nullptr || argv[3] == nullptr )
    {
        std::cout << "not found any file name" << std::endl;
        return 0;
    }

    std::ifstream fin1;
    std::ifstream fin2;
    std::ofstream fout;

    fin1.open(argv[1]);
    fin2.open(argv[2]);
    fout.open(argv[3]);

    if( !fin1.is_open() || !fin2.is_open() || !fout.is_open() )
    {
        std::cout << "file status incorrect" << std::endl;
        return 0;
    }

    std::string str_line_fin1;
    std::string str_line_fin2;
    int flag = 0;
    // getline( fin1, str_line_fin1 );
    // getline( fin2, str_line_fin2 );

    while( flag != 3 )
    {
        if( !getline( fin1, str_line_fin1 ) )
        {
            flag = 1;
        } else {
            flag = 0;
        }
        if( !getline( fin2, str_line_fin2 )  )
        {
            flag |= 2;
        }
        switch( flag )
        {
            case 0:
              fout << str_line_fin1 << " " << str_line_fin2 << std::endl;
              break;
            case 1:
              fout << str_line_fin2 << std::endl;
              break;
            case 2:
              fout << str_line_fin1 << std::endl;
              break;
            default:
              break;
        }
    }

    fin1.close();
    fin2.close();
    fout.close();
    return 0;
}