/*
通过完成下面的工作来改进String类声明（即将String1.h升级为String2.h）。

a. 对+运算符进行重载，使之可将两个字符串合并成1个。
b. 提供一个Stringlow()成员函数，将字符串中所有的字母字符转换为小写（别忘了cctype系列字符函数）。
c. 提供String()成员函数，将字符串中所有字母字符转换成大写。
d. 提供一个这样的成员函数，它接受一个char参数，返回该字符在字符串中出现的次数。
使用下面的程序来测试您的工作：
// pe12_2.cpp
#include<iostream>
using namespace std;
#include "string2.h"
int main ()
{
    String s1( " and I am a C++ student . " );
    String s2 = "P1ease enter your name: ";
    string s3;
    cout << s2 ;    // overloaded << operator
    cin >> s3;      / overloaded >> operator
    s2 = "My name is " +s3;     // overloaded =, + operators
    cout << s2 << ".\n";
    s2 = s2 + sl ;
    s2 .stringup() ;            // converts string to uppercase
    cout << "The string\n" << s2 << "\ncontains " << s2.has ( 'A ')
         << "'A'characters in it.in" ;
    s1 = "red" ;                //String(const char *),
                                //then String & operator=(const String&)
    String rgb[3] = { string(s1), string ( "green"),string(blue")};
    cout c< "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow();// converts string to lowercase
        for (int i =0; i< 3; i++)
        {
            if (ans == rgb[i])  // overloaded == operator
            {
                cout << "That's right !in";
                success =true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << “Try again!\n" ;
        }
        cout <<"Bye\n" ;
        return 0;
}
输出应与下面相似:
Please enter your name : Pretta FarboMy name is Fretta Farbo.
The string
NY NAME IS FRETTA FARBO AND I AM AC++STUDENT.
contains 6'A' characters in it.
Enter the name of a primary color for mixing light : yellow
Try again!
BLUE
That's right!
Bye
*/
#include<iostream>
#include "2.h"
using namespace std;
int main ()
{
    String s1( " and I am a C++ student . " );
    String s2 = "P1ease enter your name: ";
    String s3;
    cout << s2 ;    // overloaded << operator
    cin >> s3;      // overloaded >> operator
    s2 = "My name is " + s3;     // overloaded =, + operators
    cout << s2 << ".\n";
    s2 = s2 + s1 ;
    s2 .stringup() ;            // converts string to uppercase
    cout << "The string\n" << s2 << "\ncontains " << s2.has ('A')
         << "'A'characters in it.in" ;
    s1 = "red" ;                //String(const char *),
                                //then String & operator=(const String&)
    String rgb[3] = { String(s1), String ( "green"), String("blue")};
    cout << "Enter the name of a primary color for mixing light: ";
    String ans;
    bool success = false;
    while (cin >> ans)
    {
        ans.stringlow();// converts string to lowercase
        for (int i =0; i< 3; i++)
        {
            if (ans == rgb[i])  // overloaded == operator
            {
                cout << "That's right !in";
                success =true;
                break;
            }
        }
        if (success)
            break;
        else
            cout << "Try again!\n" ;
    }
    cout <<"Bye\n" ;
    return 0;
}