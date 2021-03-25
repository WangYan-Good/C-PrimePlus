#include<iostream>
#include<cstring>
/*
Betelgeusean plorg有这些特征。
数据：

  plorg的名称不超过19个字符；
  plorg有满意指数（CI），这是一个整数。
操作：

  新的plorg将有名称，其CI值为50；
  plorg的CI可以修改；
  plorg可以报告其名称和CI；
  plorg的默认名称为“Plorga”。
请编写一个Plorg类声明（包括数据成员和成员函数原型）来表示plorg，并编写成员函数的函数定义。
然后编写一个小程序，以演示Plorg类的所有特性。
*/
class Betelgeusean
{
  private:
    char name[20];
    int  CI;
  public:
    Betelgeusean( char n[] = "Plorga", int Ci = 50 );
    void show();

};

Betelgeusean::Betelgeusean( char n[], int Ci )
{
  strcpy( name, n );
  CI = Ci;
}

void Betelgeusean::show()
{
  std::cout << name << std::endl;
  std::cout << CI << std::endl;
}

int main()
{
  Betelgeusean plorg;
  plorg.show();
  return 0;
}