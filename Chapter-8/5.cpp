#include<iostream>
using namespace std;
/*
编写模板函数max5()，它将一个包含5个T类型元素的数组作为参数，
并返回数组中最大的元素（由于长度固定，因此可以在循环中使用硬编码，而不必通过参数来传递）。
在一个程序中使用该函数，将T替换为一个包含5个int值的数组和一个包含5个double值的数组，以测试该函数。
*/
template <typename T> 
T max5( T arr[5] )
{
  T max;
  max = arr[0] > arr[1]?arr[0]:arr[1];
  max = max > arr[2]?max:arr[2];
  max = max > arr[3]?max:arr[3];
  max = max > arr[4]?max:arr[4];
  return max;
}

int main()
{
  int arr1[5] = { 0, 1, 2, 3, 4 };
  double arr2[5] = { 1.1, 2.3, 5.6, 7.123, 2.0 };

  cout << "max int num:" << max5( arr1 ) << endl;
  cout << "max double num:"<< max5( arr2 ) << endl;
}