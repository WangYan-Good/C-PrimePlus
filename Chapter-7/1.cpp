#include<iostream>
using namespace std;
/*
编写一个程序，不断要求用户输入两个数，直到其中的一个为0。
对于每两个数，程序将使用一个函数来计算它们的调和平均数，并将结果返回给main()，而后者将报告结果。
调和平均数指的是倒数平均值的倒数，计算公式如下：

调和平均数=2.0*x*y/(x+y)
*/
double JudAver( double x , double y )
{
  return 2.0 * x * y / (x+y) ;
}

int main()
{
  double num1;
  double num2;
  cout << "Enter num1 and num2:";
  cin >> num1;
  cin >> num2;
  while( num1 != 0 && num2 != 0 )
  {
    cout << JudAver( num1, num2 )<<endl;
    cout << "Enter num1 and num2:";
    cin >> num1;
    cin >> num2;
  }
  return 0;
}
