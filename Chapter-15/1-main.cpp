/*
1．对Tv和 Remote类做如下修改:
a. 让它们互为友元;
b．在.Remote类中添加一个状态变量成员，该成员描述遥控器是处于常规模式还是互动模式;
c．在 Remote中添加一个显示模式的方法;
d.在Tv类中添加一个对 Remote中新成员进行切换的方法，该方法应仅当TV处于打开状态时才能运行。
编写一个小程序来测试这些新特性。

*/
#include "1.h"
#include<iostream>
int main()
{
  Tv      s42;
  Remote  grey;

  std::cout << "Initial setting" << std::endl;
  s42.setting();

  grey.show_r_mode();
  s42.change_r_mode(grey);
  grey.show_r_mode();

  s42.onoff();
  s42.chanup();
  s42.chanup();

  return 0;
}