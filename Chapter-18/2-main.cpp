/*
2.下面是类Cpmv的声明;
class Cpmv
{
    public:
    struct Info
    {
        std::string qcode;
        std::string zcode;
    }
    private:
        Info *pi ;
    public:
        Cpmv {};
        Cpmv (std::string q, std::string z);
        Cpmv (const Cpmv & cp);
        Cpmv (Cpmv && mv) ;
        ~Cpmv();
        Cpmv & operator=(const Cpmv & cp);
        Cpmv & operator=(Cpmv && mv);
        Cpmv operator+(const Cpmv & obj) const;
        void Display() const;
};
函数 operator+ ()应创建一个对象，其成员qcode和 zcode有操作数的相应成员拼接而成。
请提供为移动构造函数和移动赋值运算符实现移动语义的代码。编写一个使用所有这些方法的程序。
为方便测试，让各个方法都显示特定的内容,以便知道它们被调用。
*/
#include "2.h"
int main()
{
  Cpmv cp1( "hello", "world" );
  std::cout << "cp1.Display" << std::endl;
  cp1.Display();

  Cpmv cp2( cp1 );
  std::cout << "cp2.DisPlay" << std::endl;
  cp2.Display();

  Cpmv cp3 = cp1;
  std::cout << "cp3.Display" << std::endl;
  cp3.Display();

  Cpmv && cp4 = cp1 + cp2;
  std::cout << "cp4.Display" << std::endl;
  cp4.Display();

  return 0;
}