#include<iostream>
using namespace std;
/*
结构CandyBar包含了3个成员。第一个成员存储了糖块的品牌；第二个成员存储糖块的重量（可以有小数）；第三个成员存储了糖块的卡路里含量（整数）。请编写一个程序，声明这个结构，创建一个名为snack的CandyBar变量，并将其成员分别初始化为“Mocha Munch”、2.3和350。初始化应在声明snack时进行。最后，程序显示snack变量的内容。
*/
struct CandyBar
{
  string Board;
  float  weight;
  int    Calurul;
};

void PrintCandyBar(CandyBar snack)
{
  cout << "Board: " << snack.Board << endl;
  cout << "weight: " << snack.weight << endl;
  cout << "Calurul: " << snack.Calurul << endl;
}
int main()
{
  CandyBar snack;
  snack.Board = "Mocha Munch";
  snack.weight = 2.3;
  snack.Calurul = 350;
  PrintCandyBar( snack ); 
  return 0;
}
