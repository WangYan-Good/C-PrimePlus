#include"4.h"
#include<iostream>
/*
请看下面程序清单10.10定义的Stack类的变量：
// stack.h --class declaration for the stack ADT
typedef unsigned long Item;

class Stack
{
private:
    enum { MAX = 10 };
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
};
正如私有成员表明的，这个类使用动态内存分配的数组来保存栈项。
请重新编写方法，以适应这种新的表示法，并编写一个程序来演示所有的方法，包括复制构造函数和赋值运算符。
*/
int main()
{
    Item item;
    Stack stack;
    if( stack.isempty() )
        std::cout << "stack is empty" << std::endl;
    if (stack.push(20))
        std::cout << "push success " << std::endl;
    if ( stack.pop(item) )
        std::cout << "item: " << item << std::endl;

    return 0;
}
