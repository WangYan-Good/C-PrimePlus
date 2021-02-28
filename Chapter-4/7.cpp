#include<iostream>
using namespace std;
/*
William Wingate 从事比萨饼分析服务。对于每个披萨饼，他都需要记录下列信息：
- 披萨饼公司的名称，可以有多个单词组成。
- 披萨饼的直径。
- 披萨饼的重量。
请设计一个能够存储这些信息的结构，并编写一个使用这种结构变量的程序。程序将请求用户输入上述信息，然后显示这些信息。请使用cin（或它的方法）和cout。
*/
struct William 
{
  string board;
  float  weight;
  float  diameter;
};

void PrintWilliam(William wlam)
{
  cout << "board: " << wlam.board << endl;
  cout << "weight: " << wlam.weight << endl;
  cout << "diameter: " << wlam.diameter << endl;
}
int main()
{
  William wlam ;
  cout << "Enter board: ";
  getline(cin,wlam.board);
  
  cout << "Enter diameter: ";
  cin >> wlam.diameter;

  cout << "Enter weight: ";
  cin >> wlam.weight;
  PrintWilliam( wlam ); 
  return 0;
}
