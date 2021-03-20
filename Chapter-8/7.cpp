#include<iostream>
using namespace std;
/*
修改程序清单8.14，使其使用两个名为SumArray()的模板函数来返回数组元素的总和，而不是显示数组的内容。程序应显示thing的总和以及所有debt的总和。
*/
struct debt
{
  char name[50];
  double amount;
};


template<typename T>
T SumArry( T arr[], int len )
{
  T sum = 0;
  for ( int index = 0; index < len; index++ )
  {
    sum += arr[index];
  }
  return sum;
}

template<typename T>
T* SumArry( T* arr[], int len )
{
  T* sum = new T;
  for( int index = 0; index < len; index++ )
  {
    *sum += *arr[index];
  }
  return sum;
}

int main()
{
  int arr1[4] = { 1,2,3,4 };
  cout << SumArry( arr1, 4 ) << endl;

  struct debt e1[4] = {
      {"xiaoming", 4000},
      {"xiaohong", 2000},
      {"xiaohua", 3000},
      {"xiaoliang", 5000}
  };
  double* db[4];
  for ( int i = 0; i < 4; i++ )
  {
    db[i] = &e1[i].amount;
  }
  cout << *SumArry( db, 4 ) << endl;
  return 0;
}
