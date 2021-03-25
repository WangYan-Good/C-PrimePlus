#include<iostream>
#include"6.h"
/*
下面是一个类声明：
class Move
{
  private:
    double x;
    double y;

  public:
    Move(double a = 0, double b = 0);  //sets x,y to a , b
    showmove() const;                  //shows current x , y values
    Move add(const Move & m) const;
  //this function adds x of m to x of incoking object to get new x,
  //adds y of m to y of invoking object to get new y , creates a new 
  //move object initialized to new x ,y values and returns it
    reset(double a = 0, double b = 0);  //resets x , y to a , b
};
请提供成员函数的定义和测试这个类的程序
*/
Move::Move( double a, double b )
{
  x = a;
  y = b;
}
Move Move::add( const Move & m ) const
{
  Move mv;
  mv.x += m.x;
  mv.y += m.y;
  return mv;
}

void Move::reset(double a, double b)
{
  x = a;
  y = b;
}

void Move::showmove() const
{
  std::cout << x << std::endl;
  std::cout << y << std::endl;
}