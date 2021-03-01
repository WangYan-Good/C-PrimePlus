#include<iostream>
#include<vector>
using namespace std;
/*
编写一个程序，让用户输入三次40码跑的成绩（如果您愿意，也可让用户输入40米跑的成绩），并显示次数和平均成绩。请使用一个array对象来存储数据（如果编译器不支持array类，请使用数组）。
*/
int main()
{
  vector<float> grade(3);
  cout << "Enter first Grade:";
  cin >> grade[1];
  
  cout << "Enter second Grade:";
  cin >> grade[2];

  cout << "Enter third Grade:";
  cin >> grade[3];
  
  cout << "average: " << (grade[1]+grade[2]+grade[3])/3 << endl;
  return 0;
}
