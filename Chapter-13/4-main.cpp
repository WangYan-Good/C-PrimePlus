/*
Benevolent Order of Programmers用来维护瓶装葡萄酒箱。为描述它，BOP Portmaster设置了一个Port类，其声明如下：
#include <iostream>
using namespace std;
class Port
{
private:
    char* brand;
    char style[20];
    int bottles;
public:
    Port( const char * br = "none", const char * st = "none", int b = 0 );
    Port( const Port & p );
    virtual ~Port() { delete[] brand; }
    Port & operator=( const Port & p );
    Port & operator+=( int b );
    Port & operator-=( int b );
    int BottleCount() const { return bottles; } ;
    virtual void Show() const;
    friend ostream & operator<<( ostream & os, const Port & p );
};
show()方法按下面的格式显示信息：

Brand: Gallo

Kind: tawny

Bottles: 20

operator<<()函数按下面的格式显示信息（末尾没有换行符）：

Gallo, tawny, 20

PortMaster完成了Port类的方法定义后派生了VintagePort类，然后被解职——因为不小心将一瓶45度Cockburn泼到了正在准备烤肉调料的人身上，VintagePort类如下所示：
class VintagePort : public Port
{
private:
    char* nickname;
    int year;
public:
    VintagePort();
    VintagePort( const char* br, int b, const char* nn, int y );
    VintagePort( const VintagePort & vp );
    ~VintagePort() { delete[] nickname; };
    VintagePort & operator=( const VintagePort & vp );
    void Show() const;
    friend ostream & operator<<( ostream & os, const VintagePort & vp );
};
您被指定负责完成VintagePort。

a. 第一个任务是重新创建Port方法定义，因为前任被开除时销毁了方法定义。

b. 第二个任务是解释为什么有的方法重新定义了，而有些没有重新定义。

c. 第三个任务是解释为何没有将operator=()和operator<<()声明为虚的。

d. 第四个任务是提供VintagePort中各个方法的定义。
*/
// useport.cpp -- check the functions
#include "4.h"
 
int main()
{
    Port wine1("Leonardo", "white", 15);
    Port wine2 = wine1;
    cout << "Now your wines are:\n";
    wine1.Show();
    wine2.Show();
    wine1 += 18;
    wine2 -= 6;
    cout << "After the change, your wines' bottles are:\n";
    cout << "Wine1: ";
    wine1.BottleCount();
    cout << "Wine2: ";
    wine2.BottleCount();
    cout << "And the conclusion is\n";
    cout << wine1 << endl;
    cout << wine2 << endl;
    cout << endl;
    cout << "Now your wines upgrade to VintagePort class.\n";
    VintagePort wine3("Elma", 21, "tww", 23);
    VintagePort wine4;
    (Port &)wine4 = (Port &)wine3;
    (VintagePort &)wine4 = (VintagePort &)wine3;
    cout << "Now the new wines are:\n";
    wine3.Show();
    wine4.Show();
    wine3 += 17;
    wine4 -= 5;
    cout << "After the change, your new wines' bottles are:\n";
    cout << "Wine3: ";
    wine3.BottleCount();
    cout << "Wine4: ";
    wine4.BottleCount();
    cout << "And the conclusion is\n";
    cout << wine3 << endl;
    cout << wine4 << endl;
    cout << endl;
    system("Pause");
    return 0;
}