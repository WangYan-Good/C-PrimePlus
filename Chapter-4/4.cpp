#include<iostream>
#include<string>
using namespace std;
/*
编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用string和头文件string中的函数。下面是该程序运行时的情形：
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip
*/
int main()
{
  string firstname;
  string lastname;
  cout << "Enter your first name:";
  getline(cin,firstname);
  cout << "Enter your last name:";
  getline(cin,lastname);
  cout << "Here's the information in a single string:" << firstname+", "+lastname << endl;
  return 0;
}
