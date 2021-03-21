#include<iostream>
#include<istream>
#include<cstring>
using namespace std;
/*
修改程序清单9.9：用string对象代替字符数组。这样，该程序将不再需要检查输入的字符串是否过长，同时可以将输入字符串同字符串“”进行比较，以判断是否为空行。
*/

void strcount( const string str )
{
  cout << str.length() << endl;
}

int main()
{
  string str;

  cout << "Enter a line:";
  getline(cin,str);
  while ( !str.empty()  )
  {
    strcount( str );
    cout << "Enter next line (empty line to quit):";
    getline(cin, str);
  }
  cout << "Bye" << endl;
  return 0;
}
