#include<iostream>
using namespace std;
/*
编写一个程序，其中的mian()调用一个用户定义的函数
（以摄氏温度为参数，并返回相应的华氏温度值）
并显示结果：
Please enter a Celsius value:20
20 degree Celsius is 68 degrees Fahrenheit
下面是转换公式：
华氏温度 = 1.8 * 摄氏温度 + 32.0
*/
int main()
{
    float degree;
    cout << "Please enter a Celsius value:";
    cin >> degree;
    cout << degree  << " degrees Celsius is "<< (int)(degree * 1.8 + 32.0) <<" degrees Fahrenheit."<< endl;
    return 0;
}
