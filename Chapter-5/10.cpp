#include<iostream>
using namespace std;
/*
编写一个使用嵌套循环的程序，要求用户输入一个值，指出要显示多少行。
然后，程序将显示相应行数的星号，其中第一行包括一个星号，第二行包括两个星号，依此类推。
每一行包含的字符数等于用户指定的行数，在星号不够的情况下，在星号前面加上句点。该程序的运行情况如下：

Enter number of rows: 5

....*

...**

..***

.****

*****
*/
int main()
{
  int rows;
  cout << "Enter number of rows:";
  cin >> rows;
  for ( int i = 0; i < rows; i++ )
  {
    for( int j = 0; j < rows -i-1; j++  )
    {
      cout << ".";
    }
    for ( int k = rows -i-1; k < rows; k++ )
    {
      cout << "*";
    }
    cout << endl;
  }
}
