/*
重新编写最后的Time类示例（程序清单11.10、程序清单11.11和程序清单11.12），使用友元函数来实现所有的重载运算符。
*/
#include"4.h"
int main()
{
  Time t1;
  Time t2(6,18);
  Time t3(25);
  std::cout << t1;
  std::cout << t2 + t3;
  std::cout << 3*t2;
  std::cout << t2-t3;
  return 0;
}