#include<iostream>
using namespace std;
/*
����һ���ݹ麯��������һ�����������������ظò����Ľ׳ˡ�
ǰ�潲����3�Ľ׳�д��3��������3*2�����������ƣ���0��������Ϊ1��
ͨ�õļ��㹫ʽ�ǣ����n�����㣬��n!=n*(n-1)!��
�ڳ����жԸú������в��ԣ�����ʹ��ѭ�����û����벻ͬ��ֵ�����򽫱�����Щֵ�Ľ׳ˡ�
*/
int Factorial( int num )
{
  if ( num == 1 ) return num;
  return num*Factorial(num-1);
}
int main()
{
  int num;
  cout << "Enter num:";
  cin >>num;
  cout <<Factorial(num)<<endl;
  return 0;
}
