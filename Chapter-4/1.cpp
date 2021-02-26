#include<iostream>
using namespace std;
/*
编写一个C++程序，如下述输出示例所示的那样请求并显示信息：
What is your first name? Betty Sue
What is your last name? Yewe
What letter grade do you deserve? B
What is your age? 22
Name: Yewe, Betty Sue
Grade: C
Age: 22
注意，该程序应该接受的名字包含多个单词。另外，程序将向下调整成绩，即向上调一个字母。假设用户请求A、B或C，所以不必担心D和F之间的空档。
*/
int main()
{
  string firstname;
  string lastname;
  char   grade;
  char   DeserveGrade;
  int    age;
  cout << "What is your first name?";
  cin >> firstname;

  cout << "What is your first name?";
  cin >> lastname;

  cout << "What letter grade do you deserve?";
  cin >> DeserveGrade; 
  
  cout << "What is your age?";
  cin >> age;

  cout << "Name: " << lastname << ", " << firstname << endl;
  cout << "Grade: " <<  DeserveGrade-1 << endl;
  cout << "Age: "<< age << endl;
  return 0;
}
