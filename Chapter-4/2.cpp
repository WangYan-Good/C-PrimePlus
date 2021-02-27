#include<iostream>
using namespace std;
/*
修改程序清单4.4，使用C++string类而不是char数组
*/
int main()
{
  const int ArSize = 20;
  string name;
  string dessert;

  cout << "Enter your name:";
  getline(cin,name);

  cout << "Enter your favorite dessert:";
  getline(cin,dessert);

  cout << "I have some delicious " << dessert;
  cout << " for you, " << name << "." << endl;
  return 0;
}
