#include<iostream>
using namespace std;
/*
完成编程练习5，但这一次使用一个二维数组来存储输入——3年中每个月的销售量。程序将报告每年销售量以及三年的总销售量。
*/
int main()
{
  string year_month[3][12] =
  {
    {"Jan","Feb","Mar","Apr","May","June","July","Aug","Sec","Oct","Nov","Dec"},
    {"Jan","Feb","Mar","Apr","May","June","July","Aug","Sec","Oct","Nov","Dec"},
    {"Jan","Feb","Mar","Apr","May","June","July","Aug","Sec","Oct","Nov","Dec"}
  };
  int sum = 0;
  int year_sum[3];
  int sale_year_month[3][12];
  for(int year = 0; year < 3; year++)
  {
    for ( int month =0; month < 12; month++)
    {
      cout <<"year:" << year+1 <<" month: " <<month+1<<": ";
      cin >> sale_year_month[year][month];
      year_sum[year] += sale_year_month[year][month];
      sum += sale_year_month[year][month];
    }
    cout << "year :" << year_sum[year] << endl;
  }
  cout << "sum: " << sum << endl;
  return 0;
}
