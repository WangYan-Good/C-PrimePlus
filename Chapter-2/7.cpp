#include<iostream>
using namespace std;
/*
编写一个程序，要求用户输入小时数和分钟数。在main()函数中，将这两个值传递给一个void函数，
后者以下面这样的格式显示这两个值：
Enter the number of hours: 9
Enter the number of minutes: 28
Time: 9:28
*/

void showTime( int hours, int minutes )
{
    cout << "Enter the number of hours: " << hours << endl;
    cout << "Enter the number of hours: " << minutes << endl;
    cout << "Time:" << hours << ":" << minutes << endl;
}

int main()
{
    showTime( 9 ,28 );
    return 0;
}
