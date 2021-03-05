#include <iostream>
using namespace std;
/*
在Neutronia王国，货币单位是tvarp，收入所得税的计算方式如下：

5000 tvarps：不收税

5001~15000 tvarps：10%

15001~35000 tvarps：15%

35000 tvarps以上：20%

例如，收入为38000 tvarps 时，所得税为5000*0.00+10000*0.10+20000*0.15+3000*0.20，即4600 tvarps。请编写一个程序，使用循环来要求用户输入收入，并报告所得税。当用户输入负数或非数字时，循环将结束。
*/
int main()
{
    float tvarps;
    float tax;
    float input;
    int flag;
    while( true )
    {
        cout << "Enter tvarps:";
        cin >> tvarps;
        if ( tvarps <= 0 || cin.fail() ) break;
        if ( tvarps > 35000 ) flag = 1;
        if ( tvarps <= 35000 && tvarps > 15000 ) flag = 2;
        if ( tvarps <= 15000 && tvarps > 5000 ) flag = 3;
        if ( tvarps <= 5000 ) flag = 4;
        switch ( flag )
        {
            case 1:
                tax = ( tvarps-35000 )*0.2+(35000-15000)*0.15+(15000-5000)*0.1;
                input = tvarps - tax;
                break;
            case 2:
                tax = (tvarps-15000)*0.15+(15000-5000)*0.1;
                input = tvarps - tax;
                break;
            case 3:
                tax = (tvarps-5000)*0.1;
                input = tvarps - tax;
                break;
            case 4:
                tax = 0;
                input = tvarps - tax;
                break;
            default:
                break;
        }
        cout << "tax:" << tax << endl;
        cout << "income:" << input << endl;
    }
    return 0;
}
