#include<iostream>
#include<fstream>
using namespace std;
/*
编写一个程序，它打开一个文件，逐个字符地读取该文件，直到到达文件末尾，然后指出该文件中包含多少个字符。
*/
int main()
{
  char str;
  ifstream infile;
  infile.open("8.txt");

  infile >> str;
  while( !infile.eof() )
  {
    if ( isalpha(str) )
    {
      cout << str;
    }
    infile >> str;
  }
  return 0;
}
