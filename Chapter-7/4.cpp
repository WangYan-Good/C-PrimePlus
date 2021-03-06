#include<iostream>
using namespace std;
/*
许多州的彩票发行结构都使用如程序清单7.4所示的简单彩票玩法的变体。
在这些玩法中，玩家从一组被称为域号码（field number）的号码中选择几个。例如，可以从域号码1~47中选择5个号码；还可以从第二个区间（如1~27）选择一个号码（称为特选号码）。
要赢得头奖，必须正确猜中所有的号码。中头奖的几率是选中所有域号码的几率与选中号码几率的乘积。
例如，在这个例子中，中头奖的几率是从47个号码中正确选取5个号码的几率与从27个号码中正确选择1个号码的几率的乘积。请修改程序清单7.4，以计算中得这种彩票头奖的几率。
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
