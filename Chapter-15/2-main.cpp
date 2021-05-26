/*
2．修改程序清单15.11，使两种异常类型都是从头文件<tdexcept>提供的 logic_error类派生出来的类。
让每个 what()方法都报告函数名和问题的性质。异常对象不用存储错误的参数值,而只需支持what( )方法。

*/
#include "2.h"
int main()
{
  double x,y,z;

  std::cout << "Enter two numbers: ";
  while( std::cin >> x >> y )
  {
    try
    {
      z = hmean( x, y );
      std::cout << "Harmonic mean of " << x << " and " << y << " is " << z << std::endl;
      std::cout << "Geometric mean of " << x << " and " << y << " is " << gmean(x, y) << std::endl;
      std::cout << "Enter next set of two numbers <q to quit>: ";
    }
    catch ( bad_hmean & bg )
    {
      std::cout  << bg.what();
      std::cout << "Error message:\n";
      bg.mesg();
      std::cout << "Try again.\n";
      continue;
    }
    catch ( bad_gmean & hg )
    {
      std::cout << hg.what();
      std::cout << "Error message:\n";
      std::cout << hg.mesg();
      std::cout << "Values used: " << hg.v1 << ", " << hg.v2 << std::endl;
      std::cout << "Sorry, you don't get to play any more.\n";
      break;
    }
  }

  std::cout << "Bye!\n";
  system("pause");
  return 0;
}