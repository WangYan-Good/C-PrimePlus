#include<iostream>
#include<cstring>
using namespace std;
/*
������һ���ṹ������

struct box

{
        char maker[40];

        float height;

        float width;

        float length;

        float volume;

};
a. ��дһ����������ֵ����box�ṹ������ʾÿ����Ա��ֵ��

b. ��дһ������������box�ṹ�ĵ�ַ������volume��Ա����Ϊ������ά���ȵĳ˻���

c. ��дһ��ʹ�������������ļ򵥳���
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
