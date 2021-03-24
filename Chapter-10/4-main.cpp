#include<iostream>
#include"4.h"
using namespace SALES;

int main()
{
  Sales s1;
  s1.setSales( s1 );
  s1.showSales();
  std:: cout << std::endl;

  Sales s2;
  double arr[4] = { 1.23, 2.34, 3.45, 4.56 };
  s2.setSales( arr, 4 );
  s2.showSales();
  std:: cout << std::endl;
}