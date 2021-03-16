#include<iostream>
using namespace std;
/*
CandyBar结构包含3个成员，第一个成员存储candy bar的品牌名称；
第二个成员存储candy bar的重量（可能有小数）；
第三个成员存储candy bar的热量（整数）。
请编写一个程序，它使用一个这样的函数，即将CandyBar的引用、char指针、double和int作为参数，并用最后3个值设置相应的结构成员。
最后3个参数的默认值分别为“Millennium Munch”、2.85和350。另外，该程序还包含一个以CandyBar的引用为参数，并显示结构内容的函数。请尽可能使用const。
*/
struct CandyBar
{
  char*  name;
  float  weight;
  int    enerage;
};

void display( const CandyBar & can )
{
  cout << can.name << endl;
  cout << can.weight << endl;
  cout << can.enerage << endl;
}

void init( CandyBar & candybar, char* Str = "Millennium Munch", double we = 2.85, int en = 350 )
{
  candybar.name = Str;
  candybar.weight = we;
  candybar.enerage = en;
}


int main()
{
  CandyBar cdbr;
  CandyBar & cr = cdbr;
  init( cr );
  display( cr );
  return 0;
}
