#include<iostream>
#include<vector>
using namespace std;
/*
编写一个要求用户输入两个整数的程序。该程序将计算并输出这两个整数之间（包括这两个整数）所有整数的和。这里假设先输入较小的整数。例如，如果用户输入的是2和9，则程序将指出2~9之间所有整数的和为44。
*/
int main()
{
  int min;
  int max;
  int sum = 0;
  cout << "Enter the smaller number:";
  cin >> min;

  cout << "Enter the larger number:";
  cin >> max;
  
  for (int index=min; index <= max; index++ )
  {
    sum += index; 
  }
  cout << "the sum of those number is: " << sum << endl;
  return 0;
}
