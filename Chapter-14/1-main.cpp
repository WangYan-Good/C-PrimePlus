/*
  Wine类有一个string类对象成员(参见第4章)和一个Pair对象(参见本章)：
其中前者由于存储葡萄酒的名称，而后者有2个valaeeay<int>对象(参见本章)，
这两个valarray<int>对象分别保存了葡萄酒的酿造年份和该年生产的瓶数。
例如，Pair的第1个valarray<int>对象可能为1988、1992和1996年，第2个valarray<int>
对象可能为24、48和144瓶。Wine最好有1个int成员用于存储年数。另外，一些typedef
可能有助于简化编程工作：
  typedef std::valarray<int> ArrayInt;
  typedef Pair<ArrayInt, ArrayInt> PairArray;
这样，PairArray表示的是类型Pair<std::valarray<int>, std::valarray<int>。
使用包含来实现Wine类，并用一个简单的程序对其进行测试。Wine类应该有一个默认构造
函数以及如下构造函数。
//initialize label to 1, number of yeats to y,
//vintage years to yr[], bottles to bot[]
Wine(const char* l, int y, const int yr[], const int bot[]);
//initiallize label to l, number of yeats to y,
//create array objects of length y
Wine(const char* l, int y);

Wine 类应该有一个GetBoottle()方法，它根据Wine对象能够存储几年年份(y),提示用户
输入年份和瓶数。方法Label()返回一个指向葡萄酒名称的引用。sum()方法返回Pair对象
中第二个valarray<int>对象中的瓶数总和。

测试程序应提示用户输入葡萄酒名称、元素个数以及每个元素存储的年份和瓶数等信息。
程序将使用这些数据来构造一个Wine对象，然后显示对象中保存的信息。

下面是一个简单的测试程序：
//pel4-1.cpp -- using Wine class with containment
#include <iostream>
#include "Winec.h"

int main( void )
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab,50);
    cout << "Enter number of years: ";
    int yes;
    cin >> yrs;

    Wine holding(lab,yrs); //store label, years arrays yrs elements
    holding.GetBottles();  //solicit input for years, bottle count
    holding.Show();        //display object contents

    const int YRS = 3;

    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    //create new object, initialize using data in arrays y and b
    Wine more("Gushing Grape Red", YRS, y,b);
    more.Show();
    cout << "Total bottles for " << more.Label() //use Label() method
         << ": " << more.sum() << endl;          //use sum() method
    cout << "Bye\n";
    return 0;
}
下面是该程序的运行情况：
Enter name of wine: Gully Wash2
Enter number of years: 4
Enter Gully Wash data for 4 year(s);:
Enter year:1988
Enter bottles for that year:42
Enter year:1994
Enter bottles for that year:58
Enter year:1998
Enter bottles for that year:122
Enter year:2001
Enter bottles for that year:144
Wine: Gully Wash
        Year    Bottles
        1988    42
        1994    58
        1998    122
        2001    144
Wine: Gushing Grape Red
        Year    Bottles
        1993    48
        1995    60
        1998    72
Total bottles for Gushing Grape Red: 180
Bye
*/
#include "1.h"
int main( void )
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab,50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab,yrs); //store label, years arrays yrs elements
    holding.GetBottles();  //solicit input for years, bottle count
    holding.Show();        //display object contents

    const int YRS = 3;

    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    //create new object, initialize using data in arrays y and b
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label() //use Label() method
         << ": " << more.sum() << endl;          //use sum() method
    cout << "Bye\n";
    return 0;
}
