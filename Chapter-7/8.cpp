#include<iostream>
using namespace std;
/*
在不使用array类的情况下完成程序清单7.15所做的工作。编写两个这样的版本：

a. 使用const char*数组存储表示季度名称的字符串，并使用double数组存储开支。
b. 使用const char*数组存储表示季度名称的字符串，并使用一个结构，该结构只有一个成员——一个用于存储开支的double数组。
这种设计与使用array类的基本设计类似。
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
