#include<iostream>
#include"4.h"
using namespace SALES;
/*
请基于下面这个名称空间编写一个由3个文件组成的程序：
namespace SALES
{
  const int QUARTERS = 4;
  struct Sales
  {
    double sales[QUARTERS];
    double average;
    double max;
    double min;
  };
  //copies the lesser of 4 or n items from the array ar
  //to the sales member of s and computes and stores the
  //average, maximum, and minimum values of the entered items;
  //remaining elements of sales, if any, set to 0
  void setSales(Sales & s, const double ar[], int n);
  //gathers sales for 4 quarters interactively, stores them
  //in the sales member of s and computer and stores the
  //average, maximum, and minimum values
  void setSales(Sales & s);
  //display all information in structure s
  void showSales( const Sales & s );
}
第一个文件是一个头文件，其中包含名称空间；
第二个文件是一个源代码文件，它对这个名称空间进行扩展，以提供这三个函数的定义；
第三个文件声明两个Sales对象，并使用setSales()的交互式版本为一个结构提供值，然后使用setSales()的非交互式版本为另一个结构提供值。
另外它还使用showSales()来显示这两个结构的内容。
*/
namespace SALES
{
  //copies the lesser of 4 or n items from the array ar
  //to the sales member of s and computes and stores the
  //average, maximum, and minimum values of the entered items;
  //remaining elements of sales, if any, set to 0
  void setSales(Sales & s, const double ar[], int n)
  {
    double sum = 0;
    double min = ar[0];
    double max = ar[0];
    for ( int index = 0; index < n; index++ )
    {
      s.sales[index] = ar[index];
      sum += ar[index];
      max = max < ar[index]?ar[index]:max;
      min = min < ar[index]?min:ar[index];
    }
    s.average = sum/n;
    s.max = max;
    s.min = min;
  }
  //gathers sales for 4 quarters interactively, stores them
  //in the sales member of s and computer and stores the
  //average, maximum, and minimum values
  void setSales(Sales & s)
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
  //display all information in structure s
  void showSales( const Sales & s )
  {
    int index = 0;
    while ( s.sales[index] != '\0' && index < QUARTERS )
    {
      std::cout << "s.sales["<<index<<"]:" << s.sales[index] << std::endl;
      index++;
    }
    std::cout << "s.average:" << s.average << std::endl;
    std::cout << "s.max:" << s.max << std::endl;
    std::cout << "s.min:" << s.min << std::endl;
  }
}
