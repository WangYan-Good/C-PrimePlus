/*
4．使用lambda重新编写程序清单16.15。具体地说，使用一个有名称的Hlambda替换函数 outint()，并将函数符替换为两个匿名 lambda表达式。
*/
#include "4.h"

int main()
{
    int vals[10] = { 50, 100, 90, 180, 60, 210, 415, 88, 188, 201 };
    std::list<int> yadayada(vals, vals + 10);
    std::list<int> etcetera(vals, vals + 10);
 
    std::cout << "Original lists:\n";
    for_each(yadayada.begin(), yadayada.end(), Hlambda);
    std::cout << std::endl;
    for_each(etcetera.begin(), etcetera.end(), Hlambda);
    std::cout << std::endl;
    yadayada.remove_if([](int n) { return n > 100; });
    etcetera.remove_if([](int n) { return n > 200; });
    std::cout << "Trimmed lists:\n";
    for_each(yadayada.begin(), yadayada.end(), Hlambda);
    std::cout << std::endl;
    for_each(etcetera.begin(), etcetera.end(), Hlambda);
    std::cout << std::endl;
 
    system("pause");
    return 0;
}