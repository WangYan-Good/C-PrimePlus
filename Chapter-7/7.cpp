#include<iostream>
using namespace std;
/*
修改程序清单7.7中的3个数组处理函数，使之使用两个指针参数来表示区间。
fill_array()函数不返回实际读取了多少个数字，而是返回一个指针，该指针指向最后被填充的位置；
其他的函数可以将该指针作为第二个参数，以标识数据结尾。
*/
double* Fill_array( double* pre, double* aft )
{
  double* cur = pre;
  while( cur <= aft )
  {
    cout << "Enter:";
    cin >> *cur;
    if ( cin.fail() )
    {
      //back
      *cur = '\n';
      if ( cur > pre )
      {
        cur--;
      }
      return cur;
    }
    cur++;
  }
  cur--;
  return cur;
}

void Show_array( double* pre, double* aft )
{
  double* cur = pre;
  while( cur <= aft )
  {
    cout << *cur;
    cur++;
  }
  cout << endl;
}

void Reverse_array( double* pre, double* aft )
{
  while( pre < aft )
  {
    if ( *pre != *aft )
    {
      int temp;
      temp = *pre;
      *pre = *aft;
      *aft = temp;
    }
    pre++;
    aft--;
  }

}

int main()
{
  double arr[20];
  double* last;
  last = Fill_array( &arr[0], &arr[19] );
  Show_array( arr, last );
  Reverse_array( arr, last );
  Show_array( arr, last );

  return 0;
}
