#include<iostream>
#include"6.h"

int main()
{
  Move mv1;
  Move mv2{23,45};
  mv1.showmove();
  mv2.showmove();
  std::cout<<std::endl;

  mv1 = mv1.add(mv2);
  mv1.showmove();
  std::cout<<std::endl;

  mv2.reset();
  mv2.showmove();
  return 0;
}