#include<iostream>
#include"4.h"
/*
完成第9章的编程练习4，但将Sales结构及相关的函数转换为一个类及其方法。
用构造函数替换setSales(sales &, double [], int)函数。用构造函数实现setSales(Slaes &)方法的交互版本。将类保留在名称空间SALES 中。
*/
namespace SALES
{
  Sales::Sales()
  {
    sales[QUARTERS] = { 0 };
    average = 0;
    max = 0;
    min = 0;
  }

  void Sales::setSales( Sales & s )
  {
    int index = 0;
    double sum = 0;
    double max = 0;
    double min = 0xFFFFFFFF;
    while (true)
    {
      std::cout << "Enter sales["<<index<<"]:";
      std::cin >> s.sales[index];
      if ( std::cin.fail() || index == QUARTERS ) break;

      if ( index == 0 )
      {
        max = s.sales[index];
        min = s.sales[index];
      } else {
        max = max > s.sales[index]?max:s.sales[index];
        min = min < (s.sales[index])?min:(s.sales[index]);
      }
      sum += s.sales[index];
      index++;
    }
    s.average = sum/index;
    s.max = max;
    s.min = min;
  }

  void Sales::setSales( const double ar[], int n )
  {
    double sum = 0;
    double Min = ar[0];
    double Max = ar[0];
    for ( int index = 0; index < n; index++ )
    {
      sales[index] = ar[index];
      sum += ar[index];
      Max = Max < ar[index]?ar[index]:Max;
      Min = Min < ar[index]?Min:ar[index];
    }
    average = sum/n;
    max = Max;
    min = Min;
  }

  void Sales::showSales()
  {
    int index = 0;
    while ( sales[index] != '\0' && index < QUARTERS )
    {
      std::cout << "s.sales["<<index<<"]:" << sales[index] << std::endl;
      index++;
    }
    std::cout << "s.average:" << average << std::endl;
    std::cout << "s.max:" << max << std::endl;
    std::cout << "s.min:" << min << std::endl;
  }
}

