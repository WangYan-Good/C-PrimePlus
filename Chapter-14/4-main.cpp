/*
Person类保存人的名和姓。除构造函数外，它还有Show()方法，用于显示名和姓。
Gunsliner类以Person类为虚基类派生而来，它包含一个Draw()成员，该方法返回一个double值，表示枪手的拔枪时间。
这个类还包含一个int成员，表示枪手枪上的刻痕数。最后，这个类还包含一个Show()函数，用于显示所有这些信息。

PokerPlayer类以Person类为虚基类派生而来。
它包含一个Draw()成员，该函数返回一个1~52的随机数，用于表示扑克牌的值（也可以定义一个Card类，其中包含花色和面值成员，然后让Draw()返回一个Card对象）。
PokerPlayer类使用Person类的show()函数。BadDude()类从Gunslinger和PokerPlayer类公有派生而来。
它包含Gdraw()成员（返回坏蛋拔枪的时间）和Cdraw()成员（返回下一张扑克牌），另外还有一个合适的Show()函数。
请定义这些类和方法以及其他必要的方法（如用于设置对象值的方法），并使用一个类似于程序清单14.12的简单程序对它们进行测试。
*/
#include "4.h"

int main()
{
    Gunsliner gunsliner( "wang", "yan", 8, 3.2 );
    gunsliner.Show();
    std::cout << gunsliner.Draw() << std::endl;

    PokerPlayer pokerplayer( "xiao", "ming", 50 );
    pokerplayer.Show();

    BadDude baddude( "xiao", "hong", 32, 4.54, 12 );
    baddude.Show();

    return 0;
}