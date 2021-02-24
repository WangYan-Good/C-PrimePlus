#include<iostream>
using namespace std;
/*
编写一个C++程序定义的函数，（包括main()），并生成下面的输出
Three blind mice
Three blind mice
see how they run
see how they run
其中一个函数要调用两次，该函数生成前两行；
另一个函数也被调用两次，并生成其余的输出
*/
void outputstr1();

void outputstr2();

int main()
{
    outputstr1();
    outputstr1();
    outputstr2();
    outputstr2();

    return 0;
}

void outputstr1()
{
    cout << "Three blind mice" << endl;
}

void outputstr2()
{
    cout << "See how they run" << endl;
}
