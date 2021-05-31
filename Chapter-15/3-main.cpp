/*
3．这个练习与编程练习2相同，但异常类是从一个这样的基类派生而来的:它是从logic_error派生而来的，并存储两个参数值。
异常类应该有一个这样的方法:报告这些值以及函数名。
程序使用一个catch块来捕获基类异常，其中任何一种从该基类异常派生而来的异常都将导致循环结束。

*/
#include "3.h"

int main()
{
  double value1;
  double value2;

  std::cout << "Enter value 1:";
  std::cin >> value1;

  std::cout << "Enter value 2:";
  std::cin >> value2;

  try
  {
    std::cout << hmean( value1, value2 ) << std::endl;
    std::cout << gmean( value1, value2 ) << std::endl;
  } catch( bad_hmean & bhd )
  {
    bhd.mesg();
  }
  catch( bad_gmean & bgd )
  {
    bgd.mesg();
  }

  return 0;
}