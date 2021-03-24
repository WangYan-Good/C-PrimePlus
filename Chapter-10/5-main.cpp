#include<iostream>
#include"5.h"
int main()
{
  customer c;
  c.fullname = "nihao";
  c.payment = 500;

  Stack stack;
  stack.push(c);

  if ( !stack.isempty() )
  {
    std::cout << "stack is not empty" << std::endl;
  }
  return 0;
}