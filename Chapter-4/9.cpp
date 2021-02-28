#include<iostream>
using namespace std;
/*
完成编程练习6，但使用new来动态分配数组，而不是声明一个包含3个元素的CandyBar数组。
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
  CandyBar* snack = new CandyBar[1];
  snack[0] = { "Mocha Munch", 2.3,  350 };
  PrintCandyBar( snack[0] ); 
  return 0;
}
