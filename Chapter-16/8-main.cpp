/*
Mat和Pat希望邀请他们的朋友来参加派对。他们要编写一个程序完成下面的任务。
让Mat输入他朋友的姓名列表。姓名存储在一个容器中，然后按排列后的顺序显示出来。
让Pat输入她朋友的姓名列表。姓名存储在另一个容器中，然后按排列后的顺序显示出来。
创建第三个容器，将两个列表合并，删除重复的部分，并显示这个容器的内容。
*/
#include "8.h"

int main()
{
    std::set <std::string> Mat_friends;
    std::set <std::string> Pat_friends;
    std::set <std::string> All_friends;
    std::string name;
    std::cout << "Mat input his friends(Enter \'q\' exit):";
    while( true )
    {
        std::cin >> name;
        if( name == "q" )
        {
            break;
        }
        Mat_friends.insert( name );
    }
    std::cout << "Mat's friends:"<< std::endl;
    std::for_each( Mat_friends.begin(), Mat_friends.end(), Show );

    std::cout << "Pat input his friends(Enter \'q\' exit):";
    while( true )
    {
        std::cin >> name;
        if( name == "q" )
        {
            break;
        }
        Pat_friends.insert( name );
    }
    std::cout << "Pat's friends:"<< std::endl;
    std::for_each( Pat_friends.begin(), Pat_friends.end(), Show );

    set_union( Mat_friends.begin(), Mat_friends.end(), Pat_friends.begin(), Pat_friends.end(), std::insert_iterator< std::set<std::string> > ( All_friends, All_friends.begin() ) );
    
    std::ostream_iterator< std::string, char > out( std::cout, " " );
    std::copy( All_friends.begin(), All_friends.end(), out );
    return 0;
}