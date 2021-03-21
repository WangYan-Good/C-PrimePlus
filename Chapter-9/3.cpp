#include<iostream>
using namespace std;
/*
下面是一个结构声明：

struct chaff

{

       char dross[20];

        int slag;

};
编写一个程序，使用定位new运算符将一个包含两个这种结构的数组放在一个缓冲区中。
然后，给结构的成员赋值（对于char数组，使用函数strcpy()），并使用一个循环来显示内容。
一种方法是像程序清单9.10那样将一个静态数组用作缓冲区；
另一种方法是使用常规new运算符来分配缓冲区。
*/
struct chaff

{

       char dross[20];

        int slag;

};

void setchaff( chaff & cf )
{
  cout << "Enter dross:";
  cin >> cf.dross;
  cout << "Enter slag:";
  cin >> cf.slag;
}

void showchaff( chaff & cf )
{
  cout << cf.dross << endl;
  cout << cf.slag << endl;
}

int main()
{
  chaff * cf = new chaff[2];
  setchaff( cf[0] );
  setchaff( cf[1] );
  showchaff( cf[0] );
  showchaff( cf[1] );
  return 0;
}