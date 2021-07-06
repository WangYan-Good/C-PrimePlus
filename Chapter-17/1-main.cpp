/*
编写一个程序计算输入流中第一个$之前的字符数目，并将$留在输入流中。
*/
#include <iostream>
#include "1.h"

int main()
{
    char str[1024];
    std::cout << "Please fill buffer:" << std::endl;
    char ch;
    int char_count = 0;
    while( std::cin.get(ch) )
    {
        if( ch != '$' )
        {
            char_count++;
            std::cout << ch;
        } else {
            std::cin.putback(ch);
            break;
        }
    }
    std::cout << std::endl << "the sum of the char is: " << char_count << std::endl;
    // std::cout << str;
    return 0;
}