#include<iostream>
using namespace std;
/*
 编写一个小程序，要求用户使用一个整数指出自己的身高（单位为英寸），
 然后将身高转换为英尺和英寸，该程序使用下划线字符来指示输入位置。
 另外，使用一个const符号常量来表示转换因子。
 转换比例为12
*/
int main()
{
    int height_ft;
    int height_in;
    cout << "Enter you height:____\b\b\b\b";
    cin >> height_ft;
    const int Ft_pre_in = 12;
    height_in = height_ft % Ft_pre_in;
    height_ft /= Ft_pre_in;
    cout << " ft: "<< height_ft << endl << " in: "<< height_in <<endl;
    return 0;
}
