/*
考虑14章的编程练习5中的类定义。如果还没有完成这个练习，请现在就做，然后完成下面的任务。
编写一个程序，它使用标准C++I/O、文件I/O以及14章的编程练习5中定义的employee、manager、fink和highfink类型的数据。
该程序应包含程序清单17.17中的代码行，即允许用户将新数据添加到文件中。
该程序首次被运行时，将要求用户输入数据，然后显示所有的数据，并将这些信息保存到一个文件中。
当该程序再次被运行时，将首先读取并显示文件中的数据，然后让用户添加数据，并显示所有的数据。
差别之一是，应通过一个指向employee类型的指针数组来处理数据。这样，指针可以指向employee对象，也可以指向从employee派生出来的其他三种对象中的任何一种。
使数组较小有助于检查程序，例如，您可能将数组限定为最多包含10个元素：
const int MAX = 10; // no more than 10 objects
...
employee * pc[MAX];
为通过键盘输入，程序应使用一个菜单，让用户选择要创建的对象类型。菜单将使用一个switch, 以便使用 new 来创建指定类型的对象，并将它的地址赋给pc数组中的一个指针。
然后该对象可以使用虚函数 setall() 来提示用户输入相应的数据：
pc[i]->setall(); // invokes function corresponding to type of object
为将数据保存到文件中，应设计一个虚函数 writeall();
for(i = 0; i < index; i++)
    pc[i]->writeall(fout); // fout ofstream connected to output file
注意:对于这个练习，应使用文本IO，而不是二进制IO(遗憾的是，虚对象包含指向虚函数指针表的指针,而write()将把这种信息复制到文件中。
使用read()读取文件的内容，以填充对象时,函数指针值将为乱码，这将扰乱虚函数的行为)。
可使用换行符将字段分隔开，这样在输入时将很容易识别各个字段。
也可以使用二进制IO，但不能将对象作为一个整体写入，而应该提供分别对每个类成员应用write( )和read( )的类方法。这样，程序将只把所需的数据保存到文件中

比较难处理的部分是使用文件恢复数据。
问题在于:程序如何才能知道接下来要恢复的项目是cmployee对象、manager对象、fink对象还是 highfink对象?
一种方法是，在对象的数据写入文件时，在数据前面加上一个指示对象类型的整数。
这样，在文件输入时，程序便可以读取该整数，并使用switch语句创建-个适当的对象来接收数据:

enum classkind{Employee,Manager，Fink，Highfink}; // in class header
...
int classtype;
while((fin >> classtype).get (ch)){// newline separates int from data
  switch(classtype) {
    case Employee: pc[i] = new employee;
                 : break;
然后便可以使用指针调用虚函数getall()来读取信息:
pc [i++] -> getal1();

*/
#include "6.h"
int main()
{
    
}