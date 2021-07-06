/*
问题与编程练习4相同，但要编写一个模板函数：
template<class T>
int reduce(T ar[], int n):
在一个使用long实例和string实例的小程序中测试该函数。
*/
#include "5.h"
using namespace std;
int main()
{
  long testarr[10] = { 156, 124, 23, 43, 35, 23, 124, 199, 210, 156 };
  reduce( testarr, 10 );
  for( auto x:testarr )
  {
    std::cout << x <<std::endl;
  }
  std::cout << std::endl;
  string strarr[10] = { "Hello", "Good", "Tomorrow", "Yesterday", "Hi" };
  reduce( strarr, 10 );
  for( auto x:strarr )
  {
    std::cout << x << std::endl;
  }
  return 0;
}