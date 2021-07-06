/*
  完成练习1，但让两个类使用动态内存分配而不是长度固定的数组来记录字符串
*/
#include <iostream>
#include "2.h"
using namespace std;
void Bravo(const Cd & disk);
 
int main()
{
    Cd c1("Beatles", "Capitol", 14, 35.5);
    Classic c2 = Classic("Piano Sonata in B flat, Fantasia in C", "Alfred Brendel", "Philips", 2, 57.17);
    Cd * pcd = &c1;
    cout << "Using object directly:\n";
    c1.Report();
    c2.Report();
    cout << "Using type cd * pointer to objects:\n";
    pcd->Report();
    pcd = &c2;
    pcd->Report();
    cout << "Calling a function with a Cd reference argument:\n";
    Bravo(c1);
    Bravo(c2);
    cout << "Testing assignment: ";
    Classic copy;
    copy = c2;
    copy.Report();
    system("pause");
    return 0;
}
 
void Bravo(const Cd & disk)
{
    disk.Report();
}