#include<iostream>
/*
完成第9章的编程练习1，但要用正确的golf类声明替换那里的代码。用带合适参数的构造函数替换setgolf(golf &, const char *, int)， 以提供初始值。
保留setgolf()的交互版本，但要用构造函数来实现它（例如，setgolf()的代码应该获得数据，将数据传递给构造函数来创建一个临时对象，并将其赋给调用对象，即*this）。
*/
class golf
{
  private:
    std::string fullname;
    int handicap;
  public:
    golf();
    void setgolf(const char * name, int hc);
    golf* setgolf();
    void showgolf();
};

golf::golf()
{
  fullname = "";
  handicap = 0;
}
void golf::setgolf(const char * name, int hc)
{
  fullname = name;
  handicap = hc;
}

golf* golf::setgolf()
{
  golf* g = new golf;
  std::cout << "Enter golf.fullname:";
  std::cin >> g->fullname;

  std::cout << "Enter golf.handicap:";
  std::cin >> g->handicap;

  return g;
}

void golf::showgolf()
{
  std::cout << "name:" << fullname << std::endl;
  std::cout << "hc:" << handicap << std::endl;
}

int main()
{
  golf* gl = nullptr;
  gl = gl->setgolf();
  gl->showgolf();
  std::cout << std::endl;

  golf* g = new golf;
  g->setgolf( "xiaohua", 25 );
  g->showgolf();
  return 0;
}