/*
Mat和Pat想邀请他们的朋友来参加派对，就像第16章中的编程练习8那样，但现在他们希望程序使用文件。他们请您编写一个完成下述任务的程序。
从文本文件mat.dat中读取Mat朋友的姓名清单，其中每行为一个朋友。姓名将被存储在容器，然后按顺序显示出来。
从文本文件pat.dat中读取Pat朋友的姓名清单，其中每行为一个朋友。姓名将被存储在容器，然后按顺序显示出来。
合并两个清单，删除重复的条目，并将结果保存在文件matnpat.dat中，其中每行为一个朋友。
*/
#include "5.h"

int main( int argc, char * argv[] )
{
    std::cout << "argc:" << argc << std::endl;
    if( argv[1] == nullptr || argv[2] == nullptr || argv[3] == nullptr )
    {
        std::cout << "not found any file name" << std::endl;
        return 0;
    }

    std::set <std::string> mat_friends;
    std::set <std::string> pat_friends;
    std::set <std::string> all_friends;

    std::ifstream mat_fin;
    std::ifstream pat_fin;
    std::ofstream matnpat_fout;

    std::string name_friend;

    mat_fin.open(argv[1]);
    pat_fin.open(argv[2]); 
    matnpat_fout.open( "matnpat.dat" );

    if( !mat_fin.is_open() || !pat_fin.is_open() )
    {
        std::cout << "file status incorrect" << std::endl;
        return 0;
    }

    while( getline( mat_fin, name_friend ) )
    {
        mat_friends.insert(name_friend); 

    }

    while( getline( pat_fin, name_friend ) )
    {
        pat_friends.insert(name_friend);
    }

    // for_each( mat_friends.begin(), mat_friends.end(), merge_set, all_friends );
    for(auto x:mat_friends)
    {
        merge_set( x, all_friends );
    }
    // for_each( pat_friends.begin(), pat_friends.end(), merge_set, all_friends );
    for(auto x:pat_friends)
    {
        merge_set( x, all_friends );
    }
    // for_each( all_friends.begin(), all_friends.end(), output, matnpat_fout );
    for(auto x:all_friends)
    {
        output( x, matnpat_fout );
    }

    return 0;
}