#include<iostream>
using namespace std;
/*
��дһ�����򣬲���Ҫ���û�������������ֱ�����е�һ��Ϊ0��
����ÿ������������ʹ��һ���������������ǵĵ���ƽ����������������ظ�main()�������߽���������
����ƽ����ָ���ǵ���ƽ��ֵ�ĵ��������㹫ʽ���£�

����ƽ����=2.0*x*y/(x+y)
*/
double JudAver( double x , double y )
{
  return 2.0 * x * y / (x+y) ;
}

int main()
{
  double num1;
  double num2;
  cout << "Enter num1 and num2:";
  cin >> num1;
  cin >> num2;
  while( num1 != 0 && num2 != 0 )
  {
    cout << JudAver( num1, num2 )<<endl;
    cout << "Enter num1 and num2:";
    cin >> num1;
    cin >> num2;
  }
  return 0;
}
