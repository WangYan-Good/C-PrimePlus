#include<iostream>
using namespace std;
/*
 *编写一个程序，要求用户以整数方式输入秒数（使用long或long long变量存储），然后以天、小时、分钟和秒的方式显示这段时间。使用符号常量来表示每天有多少小时、每小时有多少分钟以及每分钟有多少秒。该程序的输出应与下面类似：
Enter the number of seconds: 3160000
316000 seconds = 365 days, 17 hours, 46 minutes, 40 seconds
*/
int main()
{
  long int seconds,sec;
  int  days;
  int  hours;
  int  minutes;
  cout << "Enter the number of seconds:";
  cin >> seconds;
  sec = seconds;
  days    =   seconds/(60*60*24);
  seconds %=  (60*60*24);
  hours   =   seconds / (60*60);
  seconds %=  (60*60);
  minutes =   seconds/60;
  seconds %=  60;
  cout << sec  << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds "<< endl;
  return 0;  
}
