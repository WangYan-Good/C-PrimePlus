/*
重新编写Stonewt类（程序清单11.16和程序清单11.17），使它有一个状态成员，由该成员控制对象应转换为英石格式、整数磅格式还是浮点磅格式。重载<<运算符，使用它来替换show_stn()和show_lbs()方法。
重载加法、减法和乘法运算符，以便可以对Stonewt值进行加、减、乘运算。编写一个使用所有类方法和友元的小程序，来测试这个类。
*/
#include"5.h"
int main()
{
  Stonewt st1( 25 );
  Stonewt st2( 12, 23 );
  Stonewt st3;

  std::cout << st1 << std::endl;
  std::cout << st2 << std::endl;
  std::cout << st3 << std::endl;

  std::cout << 5*st1 << std::endl;
  std::cout << st2 - st1 << std::endl;
  std::cout << st2 + st1 << std::endl;
  return 0; 
}