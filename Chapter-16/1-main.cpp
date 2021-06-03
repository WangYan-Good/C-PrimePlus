/*
回文指的是顺读和逆读都一样的字符串。例如，“tot”和“otto”都是简短的回文。
编写一个程序，让用户输入字符串，并将字符串引用传递给一个bool函数。如果字符串时回文，该函数将返回true，否则返回false。
此时，不要担心诸如大小写、空格和标点符号这些复杂的问题。即这个简单的版本将拒绝"Otto”和“Madam, I'm Adam”。请查看附录F中的字符串方法列表，以简化这项任务。
*/

#include "1.h"
using namespace std;

int main()
{
  string str;
//   string reverse_str;

  cout << "Enter string:";
  cin >> str;
  if( IsHuiWen( (const string &)str ) )
  {
    cout << "true" << endl;
  } else {
    cout << "false" << endl;
  }
  return 0;
}