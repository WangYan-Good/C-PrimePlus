#include<iostream>
using namespace std;
/*
�ڲ�ʹ��array����������ɳ����嵥7.15�����Ĺ�������д���������İ汾��

a. ʹ��const char*����洢��ʾ�������Ƶ��ַ�������ʹ��double����洢��֧��
b. ʹ��const char*����洢��ʾ�������Ƶ��ַ�������ʹ��һ���ṹ���ýṹֻ��һ����Ա����һ�����ڴ洢��֧��double���顣
���������ʹ��array��Ļ���������ơ�
*/
void version1_Fill( const char* Snames[],  double cost[], int Length )
{

  for ( int index = 0; index < Length; index++ )
  {
    cout <<"Enter Snames["<<index<<"]:"<< Snames[0]<<":expenses:";
    cin >>cost[index];
  }
}

void version1_Show( const char* Snames[], double cost[], int Length )
{
  int index = 0;
  while( index < Length )
  {
    cout<<Snames[index]<<": $"<<cost[index]<<endl;
    index++;
  }
}

void version1()
{
  const char* Snames[] = {
                            "Spring",
                            "Summer",
                            "Fall",
                            "Winter"
                          };
  double cost[4];

  version1_Fill( Snames, cost, 4 );

  version1_Show( Snames, cost, 4 );

}

  struct cost
  {
    double expense[4];
  };

cost version2_Fill( const char* Snames[], cost cs, int Length )
{
  for ( int index = 0; index < Length; index++ )
  {
    cout <<"Enter Snames["<<index<<"]:"<< Snames[0]<<":expenses:";
    cin >>cs.expense[index];
  }
  return cs;
}

void version2_Show( const char* Snames[], cost cs, int Length )
{
  int index = 0;
  while( index < Length )
  {
    cout<<Snames[index]<<": $"<<cs.expense[index]<<endl;
    index++;
  }
}

void version2()
{
  const char* Snames[] = {
                            "Spring",
                            "Summer",
                            "Fall",
                            "Winter"
                          };
  cost cs;
  cs = version2_Fill( Snames, cs, 4 );
  version2_Show( Snames, cs, 4 );
}

int main()
{
//  version1();
  version2();
  return 0;
}
