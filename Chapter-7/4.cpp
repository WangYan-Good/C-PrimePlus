#include<iostream>
using namespace std;
/*
����ݵĲ�Ʊ���нṹ��ʹ��������嵥7.4��ʾ�ļ򵥲�Ʊ�淨�ı��塣
����Щ�淨�У���Ҵ�һ�鱻��Ϊ����루field number���ĺ�����ѡ�񼸸������磬���Դ������1~47��ѡ��5�����룻�����Դӵڶ������䣨��1~27��ѡ��һ�����루��Ϊ��ѡ���룩��
ҪӮ��ͷ����������ȷ�������еĺ��롣��ͷ���ļ�����ѡ�����������ļ�����ѡ�к��뼸�ʵĳ˻���
���磬����������У���ͷ���ļ����Ǵ�47����������ȷѡȡ5������ļ������27����������ȷѡ��1������ļ��ʵĳ˻������޸ĳ����嵥7.4���Լ����е����ֲ�Ʊͷ���ļ��ʡ�
*/

long double rate( int total , int choose )
{
  long double re = 1;
  for ( ; choose > 0 ; total-- , choose-- )
  {
    re = re*total/choose;
  }
  return re;
}

int main()
{
  int field1 , field2;
  int choose1, choose2;
  cout << "Enter field1 num:";
  cin >> field1;
  cout << "Enter choose num:";
  cin >> choose1;
  cout << "Enter field2 num:";
  cin >> field2;
  cout << "Enter choose num:";
  cin >> choose2;
  cout << rate( field1, choose1 )*rate( field2, choose2 ) << endl;
  return 0;
}
