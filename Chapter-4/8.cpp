#include<iostream>
using namespace std;
/*
完成编程练习7，但使用new来为结构分配内存，而不是声明一个结构变量。另外，让程序在请求输入比萨饼公司名称之前输入比萨饼的直径。
*/
struct William 
{
  string board;
  float  weight;
  float  diameter;
};

void PrintWilliam(William* wlam)
{
  cout << "board: " << wlam->board << endl;
  cout << "weight: " << wlam->weight << endl;
  cout << "diameter: " << wlam->diameter << endl;
}
int main()
{
  William* wlam = new William ;
  
  cout << "Enter board: ";
  getline(cin,wlam->board);
  
  cout << "Enter diameter: ";
  cin >> wlam->diameter;

  cout << "Enter weight: ";
  cin >> wlam->weight;
  PrintWilliam( wlam ); 
  
  delete wlam;
  return 0;
}
