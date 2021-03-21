#include<iostream>
#include"4.h"

int main()
{
  using namespace std;
  SALES::Sales sales[2];
  SALES::setSales(sales[0]);
  std:: cout << endl;

  double arr[4] = { 1.23, 2.34, 3.45, 4.56 };
  SALES::setSales(sales[1], arr, 4);

  SALES::showSales( sales[0] );
  std:: cout << endl;
  SALES::showSales( sales[1] );
}