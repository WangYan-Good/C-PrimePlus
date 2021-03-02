#include<iostream>
#include<array>
using namespace std;
/*
使用array对象（而不是数组）和long double（而不是long long）重新编写程序清单5.4，并计算100！的值。
*/
int main()
{
  array<long double,101> arr;
  arr[0] = 1;
  for (int index=0; index < 100; index++)
  {
    arr[index+1] = (index+1)*arr[index];
    cout << index << "! =" << arr[index] << endl;
  }
    cout  << "100! =" << arr[100] << endl;
  return 0;
}
