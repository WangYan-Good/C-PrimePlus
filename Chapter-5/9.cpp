#include<iostream>
#include<string>
using namespace std;
/*
编写一个满足前一个练习中描述的程序，但使用string对象而不是字符数组。请在程序中包含头文件string，并使用关系运算符来进行比较测试。
*/
int main()
{
  string word;
  int sum = 0;
  cout << "Enter words (to tstop, type the word done):"<<endl;
  cin >> word;
  while( word != "done" )
  {
    sum++;
    cin >> word;
  }
  cout << "You entered a total of "<<sum<< " words.";
  return 0;
}
