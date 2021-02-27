#include<iostream>
#include<cstring>
using namespace std;
/*
编写一个程序，它要求用户首先输入其名，然后输入其姓；然后程序使用一个逗号和空格将姓和名组合起来，并存储和显示组合结果。请使用char数组和头文件cstring中的函数。下面是该程序运行时的情形：
Enter your first name: Flip
Enter your last name: Fleming
Here's the information in a single string: Fleming, Flip
*/
int main()
{
  const int ArSize = 20;
  char firstname[ArSize];
  char lastname[ArSize];
  char name[3*ArSize];
  cout << "Enter your first name:";
  cin.getline(firstname,ArSize);

  cout << "Enter your last name:";
  cin.getline(lastname,ArSize);
  
  strcat(name,firstname);
  strcat(name,", ");
  strcat(name,lastname);
  cout << "Here's the information in a single string:" << name << endl;
  return 0;
}
