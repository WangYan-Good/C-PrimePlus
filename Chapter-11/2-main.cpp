/*
对Vector类的头文件（程序清单11.13）和实现文件（程序清单11.14）进行修改，
使其不再存储矢量的长度和角度，而是在magval()和angval()被调用时计算它们。
应保留公有接口不变（公有方法及其参数不变），但对私有部分（包括一些私有方法）和方法实现进行修改。
然后，使用程序清单11.15对修改后的版本进行测试，结果应该与以前相同，因为Vector类的公有接口与原来相同。
*/
#include"2.h"
#include<fstream>
int main()
{
  std::ofstream fout;
  fout.open("RandWalk-2.txt");
  VECTOR::Vector vector(0, 0, VECTOR::Vector::RECT);
  VECTOR::Vector step;
  double direction;
  double dstep;
  double target;
  unsigned long steps = 0;
  std::cout << "Enter Target Distance(q to quit):";
  while( std::cin>> target )
  {
    std::cout << "Enter step length:";
    if ( !(std::cin >> dstep) )
    {
      break;
    } else {
      fout << "Target Distance: "<< target <<", Step Size: "<< dstep <<std::endl;
    }
    int step_sum = 0;
    while ( vector.magval() < target )
    {
      direction = rand() % 360;
      step.reset(dstep,direction, VECTOR::Vector::POL);
      vector = vector + step;
      steps++;
      fout << step_sum << ": (x,y) = (" << vector.xval() << ", " << vector.yval() << ")\n";
      step_sum++;
    }
    std::cout << "After " << steps << " steps, the subject has the following location:" << std::endl << vector << std::endl;
    fout <<  "After " << steps << " steps, the subject has the following location:" << std::endl << vector << std::endl;
    vector.polar_mode();
    std::cout << "or" << vector << std::endl << "Average outward distance per step = " << vector.magval()/steps << std::endl;
    fout <<  "or" << vector << std::endl << "Average outward distance per step = " << vector.magval()/steps << std::endl;
    steps = 0;
    vector.reset(0.0,0.0);
    std::cout << "Enter Target Distance(q to quit):";
  }
}