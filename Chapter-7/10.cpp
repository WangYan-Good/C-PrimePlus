#include<iostream>
using namespace std;
/*
���һ����Ϊcalculate()�ĺ���������������doubleֵ��һ��ָ������ָ�룬����ָ��ĺ�����������double������������һ��doubleֵ��
calculate()����������Ҳ��double�������ر�ָ��ĺ���ʹ��calculate()������double��������õ���ֵ�����磬����add()�����Ķ������£�
double add(double x, double y)

{

        return x + y;

}
�����������еĺ������ý�����calculate()��2.5��10.4���ݸ�add()������������add()�ķ���ֵ��12.9����
double q = calculate(2.5, 10.4, add);

���дһ��������������������������������һ����add()���Ƶĺ������ó���ʹ��ѭ�������û��ɶԵ��������֡�����ÿ�����֣�����ʹ��calculate()������add()������һ�������ĺ�����
������߰�ð�գ����Գ��Դ���һ��ָ�����飬���е�ָ��ָ��add()��ʽ�ĺ���������дһ��ѭ����ʹ����Щָ��������calculate()������Щ������
��ʾ����������������ָ������ķ�ʽ�����а�������ָ�룺

double (*pf[3])(double, double);

���Բ��������ʼ���﷨��������������Ϊ��ַ����ʼ�����������顣
*/

double (*Add)( double num1 , double num2 );

double add(double x, double y)

{

        return x + y;

}

double calculate( double x, double y, double (*Add)( double , double ) )
{
  return (*Add)(x,y) ;
}

int main()
{
  Add = add;
  cout << calculate( 2.5, 10.4, Add );
  return 0;
}
