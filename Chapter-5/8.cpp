#include<iostream>
#include<cstring>
using namespace std;
/*
编写一个程序，它使用一个char数组和循环来每次读取一个单词，直到用户输入done为止。随后，该程序指出用户输入了多少个单词（不包括done在内）。下面是该程序的运行情况：

Enter words (to tstop, type the word done):

anteater birthday category dumpster

envy finagle geometry done for sure

You entered a total of 7 words.

您应在程序中包含头文件cstring，并使用函数strcmp()来进行比较测试。
*/
int main()
{
  char word[100];
  int sum = 0;
  cout << "Enter words (to tstop, type the word done):"<<endl;
  cin >> word;
  while( strcmp(word,"done") != 0 )
  {
    sum++;
    cin >> word;
  }
  cout << "You entered a total of "<<sum<< " words.";
  return 0;
}
