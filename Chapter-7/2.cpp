#include<iostream>
using namespace std;
/*
��дһ������Ҫ���û��������10���߶���ɼ���������洢��һ�������С�
���������û�����������룬����һ������ʾ���гɼ���Ȼ�󱨸�ƽ���ɼ���
��ʹ��3�����鴦�������ֱ�������롢��ʾ�ͼ���ƽ���ɼ���
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
