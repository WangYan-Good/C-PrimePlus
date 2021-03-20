#include<iostream>
#include "1.h"
#include<cstring>
/*
下面是一个头文件：
//golg.h --for pe9-1.cpp

const int Len = 40;
struct golf
{
  char fullname[Len];
  int handicap;
}

//non-interactive verison
//function sets golf strucure to provided name, handicap
//using value passed as arguments to the function
void setgolf( golf & g, const char * name, int hc );

//interactive version
//function solicits name and handicap form user
//and sets the members of g to the value entered
//returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g);
//function resets handicap to new value
void handicap(golf & g, int hc);

//function display contents of golf structure
vodi showgolf(const golf & g);

注意到setgolf()被重载，可以这样使用其第一个版本：
golf ann;
setgolf(ann, "Ann Birdfree", 24);

上述函数调用提供了存储在ann结构中的信息。可以这样使用其第二个版本：

golf andy;

setgolf(andy);

上述函数将提示用户输入姓名和等级，并将它们存储在andy结构中。这个函数可以（但是不一定必须）在内部使用第一个版本。
一个文件
根据这个头文件，创建一个多文件程序。其中的名为golf.cpp，它提供了与头文件中的原型匹配的函数定义；另一个文件应包含main()，并演示原型化函数的所有特性。例如，包含一个让用户输入的循环，并使用输入的数据来填充一个由golf结构组成的数组，数组被填满或用户将高尔夫选手的姓名设置为空字符串时，循环将结束。main()函数只使用头文件中原型化的函数来访问golf结构。
*/
void setgolf( golf & g, const char * name, int hc )
{
  strcpy( g.fullname, name );
  g.handicap = hc;
}

int setgolf(golf & g)
{
  if ( g.fullname != NULL ) return 1;
  else return 0;
}

void handicap(golf & g, int hc)
{
  g.handicap = hc;
}

void showgolf(const golf & g)
{
  std::cout << "name:" << g.fullname << std::endl;
  std::cout << "hc:" << g.handicap << std::endl;
}
