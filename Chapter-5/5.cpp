#include<iostream>
using namespace std;
/*
假设要销售《C++ For Fools》一书。请编写一个程序，输入全年中每个月的销售量（图书数量，而不是销售额）。
程序通过循环，使用初始化为月份字符串的char*数组（或string对象数组）逐月进行提示，并将输入的数据储存在一个int数组中。
然后，程序计算数组中各元素的总数，并报告这一年的销售情况。
*/
int main()
{
  string month[12] = {"Jan","Feb","Mar","Apr","May","June","July","Aug","Sec","Oct","Nov","Dec"};
  int saleNumber[12];
  int sum = 0;
  for (int index = 0; index< 12; index++)
  {
    cout << month[index] << ":";
    cin >> saleNumber[index];
    sum += saleNumber[index];
  }
  cout << "sum:" << sum << endl;
  return 0;
}
