/*
 修改程序清单11.15，使之报告N次测试中的最高、最低和平均步数（其中N是用户输入的整数），而不是报告每次测试的结果。
*/
#include"3.h"
#include<fstream>
int main()
{
  std::ofstream fout;
  fout.open("RandWalk-3.txt");
  VECTOR::Vector vector(0, 0, VECTOR::Vector::RECT);
  VECTOR::Vector step;
  double direction;
  double dstep;
  double target;
  unsigned long maxsteps = 0;
  unsigned long minsteps = 65535;
  unsigned long averagesteps = 0;
  unsigned long times;
  unsigned long curtime = 0;
  std::cout << "Enter cycle times:";
  std::cin >> times;
  std::cout << "Enter Target Distance(q to quit):";
  std::cin>> target;
  std::cout << "Enter step length:";
  std::cin >> dstep;
  fout << "Target Distance: "<< target <<", Step Size: "<< dstep <<std::endl;
  while ( curtime < times )
  {
    int step_sum = 0;
    while ( vector.magval() < target )
    {
        direction = rand() % 360;
        step.reset(dstep,direction, VECTOR::Vector::POL);
        vector = vector + step;
        fout << step_sum << ": (x,y) = (" << vector.xval() << ", " << vector.yval() << ")\n";
        step_sum++;
    }
    fout << std::endl;
    maxsteps = maxsteps>step_sum?maxsteps:step_sum;
    minsteps = step_sum>minsteps?minsteps:step_sum;
    averagesteps += step_sum;
    std::cout << "sum steps:" << step_sum << std::endl;
    vector.reset(0.0,0.0);
    curtime++;
  }
  averagesteps /= times;
  std::cout << "Max times:" << maxsteps << std::endl;
  std::cout << "Min times:" << minsteps << std::endl;
  std::cout << "Average times:" << averagesteps << std::endl;
  
// std::cout << "After " << steps << " steps, the subject has the following location:" << std::endl << vector << std::endl;
// fout <<  "After " << steps << " steps, the subject has the following location:" << std::endl << vector << std::endl;
// vector.polar_mode();
// std::cout << "or" << vector << std::endl << "Average outward distance per step = " << vector.magval()/steps << std::endl;
// fout <<  "or" << vector << std::endl << "Average outward distance per step = " << vector.magval()/steps << std::endl;
// steps = 0;
// vector.reset(0.0,0.0);
// std::cout << "Enter Target Distance(q to quit):";
return 0;
}