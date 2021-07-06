/*
 彩票卡是一个常见的游戏。卡片上带编号的圆点，其中一些圆点被随机选中。
 编写一个lotto()函数，它接受两个参数。第一个参数是彩票卡上圆点的个数，第二个参数是随机选择的圆点个数。
 该函数返回一个vector<int>对象，其中包含（按排列后的顺序）随机选择的号码。例如，可以这样使用该函数：
 vector<int> winners;
winners = Lotto(51,6);
这样将把一个矢量赋给winner，该矢量包含1~51中随机选定的6个数字。
注意，仅仅使用rand()无法完成这项任务，因它会生成重复的值。
提示：让函数创建一个包含所有可能值的矢量，使用random_shuffle()，然后通过打乱后的矢量的第一个值来获取值。编写一个小程序来测试这个函数。
*/
#include "7.h"

int main()
{
    std::vector <int> win( lotto(51, 6) );
    std::for_each( win.begin(), win.end(), Show );
    std::cout << std::endl;
    return 0;
}