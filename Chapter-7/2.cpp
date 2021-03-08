#include<iostream>
using namespace std;
/*
编写一个程序，要求用户输入最多10个高尔夫成绩，并将其存储在一个数组中。
程序允许用户提早结束输入，并在一行上显示所有成绩，然后报告平均成绩。
请使用3个数组处理函数来分别进行输入、显示和计算平均成绩。
*/
void input( double Arr[] , int ArrLength )
{
  int index = 0;
  cout << "Enter Grade:";
  cin >> Arr[index];
  while( Arr[index] >= 0 && index < ArrLength )
  {
    index++;
    cout << "Enter Grade:";
    cin >> Arr[index];
  }
}

void displayArr( double Arr[] , int ArrLength )
{
  int index = 0;
  cout << endl;
  while( index < ArrLength && Arr[index] >= 0 )
  {
    cout << Arr[index] << " ";
    index++;
  }
  cout << endl;
}

double caculateAver( double Arr[] , int ArrLength )
{
  int index = 0;
  double sum = 0;
  while( index < ArrLength && Arr[index] >= 0 )
  {
    sum += Arr[index];
    index++;
  }
  return sum/index;
}

int main()
{
  double GolfGrade[10];
  int total = 0;
  double average;
  //
  //input Gold grade
  //
  input( GolfGrade , 10 );
  //
  //display
  //
  displayArr( GolfGrade , 10 );
  //
  //caculate average
  //
  average = caculateAver( GolfGrade , 10 );
  cout << "Average Grade:"<< average;

  return 0;
}
