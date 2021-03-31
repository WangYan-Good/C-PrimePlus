/*
重新编写Stonewt类（程序清单11.16和程序清单11.17），重载全部6个关系运算符。运算符对pounds成员进行比较，并返回一个bool值。
编写一个程序，它声明一个包含6个Stonewt对象的数组，并在数组声明初始化前3个对象。然后使用循环来读取用于设置剩余3个数组元素的值。
接着报告最小的元素、最大的元素以及大于或等于11英石的元素的数量（最简单的方法是创建一个Stonewt对象，并将其初始化为11英石，然后将其同其他对象进行比较）。
*/
#include"6.h"
int main()
{
  Stonewt st[6] = { 10, 20, 15 };
  std::cout << st[0] << std::endl;
  std::cout << st[1] << std::endl;
  std::cout << st[2] << std::endl;
  if ( st[0] < st[1] ) std::cout << "st[0] < st[1]" << std::endl;
  //剩下的省略
  return 0;
}