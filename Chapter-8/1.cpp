#include<iostream>
using namespace std;
/*
编写通常接受一个参数（字符串的地址），并打印该字符串的函数。
然而，如果提供了第二个参数（int类型），且该参数不为0，则该函数打印字符串的次数将为该函数被调用的次数（注意，字符串的打印次数不等于第二个参数的值，而等于函数被调用的次数）。
是的，这是一个非常可笑的函数，但它让您能够使用本章介绍的一些技术。在一个简单的程序中使用该函数，以演示该函数是如何工作的。
*/
void display( string Str, int n = 0 )
{
  if ( n == 0 )
    cout << Str << endl;
  else {
    for ( int i = 0; i < n; i++ )
    {
        cout << Str << endl;
    }
  }
  cout << endl;
}

int main()
{
  string Str;
  cout << "Enter string:";
  cin >> Str;
  display( Str );
  display ( Str , 2 );
  display ( Str , 5 );
  display ( Str );
  return 0;
}