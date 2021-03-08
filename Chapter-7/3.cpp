#include<iostream>
#include<cstring>
using namespace std;
/*
下面是一个结构声明：

struct box

{
        char maker[40];

        float height;

        float width;

        float length;

        float volume;

};
a. 编写一个函数，按值传递box结构，并显示每个成员的值。

b. 编写一个函数，传递box结构的地址，并将volume成员设置为其他三维长度的乘积。

c. 编写一个使用这两个函数的简单程序。
*/
struct box
{
        char maker[40];

        float height;

        float width;

        float length;

        float volume;
};

void displaybox( box bx )
{
  cout << "maker:" << bx.maker << endl;
  cout << "height:"<< bx.height << endl;
  cout << "width:" << bx.width << endl;
  cout << "length:" << bx.length << endl;
  cout << "volume:" << bx.volume <<endl;
}

void SetVolume( box* bx )
{
  bx->volume = bx->height*bx->length*bx->width;
}

int main()
{
  box bx;
  strcat( bx.maker , "Intel" );
  bx.height = 23.1;
  bx.length = 50;
  bx.width = 21.8;
  SetVolume( &bx );
  displaybox( bx );
  return 0;
}
