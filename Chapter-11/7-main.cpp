/*
复数有两个部分组成：实数部分和虚数部分。复数的一种书写方式是：（3.0,4.0），其中，3.0是实数部分，4.0是虚数部分。假设a=(A,Bi),c=(C,Di)，则下面是一些复数运算。
加法：a+c=(A+C,(B+D)i)。
减法：a-c=(A-C,(B-D)i)。
乘法：a*c=(A*C-B*D,(A*D+B*C)i)。
乘法：x*c=(x*C,x*Di)，其中x为实数。
共轭：~a=(A,-Bi)。
请定义一个复数类，以便下面的程序可以使用它来获得正确的结果。

注意。必须重载运算符<<和>>。标准C++使用头文件complex提供了比这个示例更广泛的复数支持，因此应将自定义的头文件命名为complex0.h，以免发生冲突。应尽可能使用const。

下面是该程序的运行情况。

请注意，经过重载后，cin>>c将提示用户输入实数和虚数部分。

*/
#include"7.h"
int main()
{
  Complex complex1( 2, 6 );
  Complex complex2( 3, 5 );
  
  std::cout << complex1 << std::endl;
  std::cout << complex2 << std::endl;
  std::cout << complex1 - complex2 << std::endl;
  std::cout << complex1 + complex2 << std::endl;
  std::cout << complex1 * 5 << std::endl;
  std::cout << complex1 * complex2 << std::endl;
  return 0;
}