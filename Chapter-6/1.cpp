#include<iostream>
#include<cctype>
using namespace std;
/*
编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），同时将大写字符转换为小写，将小写字符转换为大写（别忘了cctype函数系列）。
*/
int main()
{
  char ch;
  cout << "Enter: ";
  cin >> ch;
  while( ch != '@' )
  {
    if (islower(ch))
    {
      ch = toupper(ch);
    }
    else if (isupper(ch))
    {
      ch = tolower(ch);
    }
    if (isdigit(ch)) 
    {
      cin >> ch;
      continue;
    }
    cout << ch;
    cin >> ch;
  }
  cout << endl;
  return 0;
}
