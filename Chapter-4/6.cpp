#include<iostream>
using namespace std;
/*
结构CandyBar包含3个成员，如编程练习5所示。请编写一个程序，创建一个包含3个元素的CandyBar数组，并将它们初始化为所选择的值，然后显示每个结构的内容。
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
  CandyBar snack = {
    "Mocha Munch",
    2.3,
    350
  };
  PrintCandyBar( snack ); 
  return 0;
}
