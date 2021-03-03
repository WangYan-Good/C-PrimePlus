#include<iostream>
#include<array>
using namespace std;
/*
编写一个程序，最多将10个donation值读入到一个double数组中（如果您愿意，也可使用模板类array）。
程序遇到非数字输入时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。
*/
int main()
{
  array<double, 10> donation;
  double                   temp ;
  double                   sum = 0;
  double                   average;
  int                         countdonate = 0;

 cout << "Enter:";
  cin >> temp;
  while ( !cin.fail()  && countdonate < 10)
  {
    donation[countdonate] = temp;
    sum += temp;
    countdonate++;
    cin >> temp;
  }
  average = sum/countdonate;
  cout << "sum:" << sum << endl << "Average:" << average << endl;
  return 0;
}
