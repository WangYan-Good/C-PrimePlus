/*
修改程序清单11.15，使之将一系列连续的随机漫步者位置写入到文件中。对于每个位置，用步号进行标示。
另外，让该程序将初始条件（目标距离和步长）以及结果小结写入到该文件中。该文件的内容与下面类似：
Target Distance: 100, Step Size: 20
0: (x,y) = (0,0)
1: (x,y) = (-11.4715, 16.383)
2: (x,y) = (-8.68807, -3.42232)
...
26: (x,y) = (42.2919, -78.2569)
27: (x,y) = (58.6749, -89.7309)
After 27 Steps, the subjuct has the following location;
(x,y) = (58.6749, -89.7309)
or
(m,a) = (107.212, -56.8194)
Average outward distance per step = 3.97081
*/
#include"1.h"
#include<fstream>
int main()
{
  std::ofstream fout;
  fout.open("RandWalk-1.txt");
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