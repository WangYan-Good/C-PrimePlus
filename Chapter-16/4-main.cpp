/*
编写一个具有老式风格接口的函数，其原型如下：
int reduce(long ar[], int n);
实参应是数组名和数组中的元素个数。该函数对数组进行排序，删除重复的值，返回缩减后数组中的元素数目。
请使用STL函数编写该函数（如果决定使用通用的unique()函数，请注意它将返回结果区间的结尾）。使用一个小程序测试该函数。
*/
#include "4.h"
using namespace std;
int main()
{
  long testarr[10] = { 156, 124, 23, 43, 35, 23, 124, 199, 210, 156 };
  reduce( testarr, 10 );
  for( auto x:testarr )
  {
    std::cout << x <<std::endl;
  }
  return 0;
}