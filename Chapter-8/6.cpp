#include<iostream>
#include<cstring>
using namespace std;
/*
编写模板函数maxn()，它将由一个T类型元素组成的数组和一个表示数组元素数目的整数作为参数，并返回数组中的最大的元素。
在程序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个double元素的数组来调用该函数。
程序还包含一个具体化，它将char指针数组和数组中的指针数量作为参数，并返回最长的字符串的地址。如果有多个这样的字符串，则返回其中第一个字符串的地址。
使用由5个字符串指针组成的数组来测试该具体化。
*/
template< typename T >
T maxn( T arr[], int len )
{
  T maxnum;
  for ( int index = 0; index < len; index++ )
  {
    maxnum = maxnum > arr[index]?maxnum:arr[index];
  }
  return maxnum;
}

template<> char* maxn( char* arr[], int arrnum )
{
    int j = 0;
    int max = 0;
    for (int i = 0; i < arrnum; i++)
    {
        if (max < strlen(arr[i]))
        {
            max = strlen(arr[i]);
            j = i;
        }
    }    
    char * address = arr[j];
    return address;
}


int main()
{
  int arr1[6] = { 0,1,2,3,4,5 };
  double arr2[4] = { 1.2, 2.3, 3.4, 4.5 };
  cout << "The int arr max:"<< maxn(arr1,6) <<endl;
  cout << "The double arr max:"<< maxn(arr2,4) << endl;

  char* arr3[4] = {"Hello","wrold","nihao","seyounala"};
  char* len = maxn( arr3, 4 );
  cout << len << endl;
}
