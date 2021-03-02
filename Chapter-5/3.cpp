#include<iostream>
using namespace std;

/*
编写一个要求用户输入数字的程序。
每次输入后，程序都将报告到目前为止，所有输入的累计和。当用户输入0时，程序结束。
*/

int main()
{
    int temp;
    int sum = 0;
    cout << "Init temp:";
    cin >> temp;
    while( temp != 0 )
    {
        sum += temp;
        cout << "sum:" << sum << endl << "Value:";
        cin >> temp;
    }
    return 0;
}
