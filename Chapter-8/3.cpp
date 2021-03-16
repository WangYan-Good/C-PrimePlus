#include<iostream>
#include<cstring>
using namespace std;
/*
 编写一个函数，它接受一个指向string对象的引用作为参数，并将该string对象的内容转换为大写，为此可使用表6.4描述的函数toupper()。
 然后编写一个程序，它通过使用一个循环让您能够用不同的输入来测试这个函数，该程序的运行情况如下：
 Enter a string (q to quit): go away
 GO AWAY
 Next string (q to quit): good grief!
 GOOD GRIEF!
 Next string (q to quit): q
 Bye.
*/
void change( string & Str )
{
  for ( int i = 0; Str[i]; i++ )
  {
    Str[i] = toupper(Str[i]);
  }
}

int main()
{
  string Str;
  string &s = Str;
  cout << "Enter a string (q to quit):";
  cin >> Str;
  while ( Str[0] != 'q' )
  {
    change(s);
    cout << s << endl;
    cout << "Next string (q to quit):";
    cin >> Str;
  }
  cout << "Bye";
  return 0;
}
