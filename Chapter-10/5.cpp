#include<iostream>
#include"5.h"
/*
考虑下面的结构声明：

struct customer {

    char fullname[35];

    double payment;

};
编写一个程序，它从栈中添加和删除customer结构（栈用Stack类声明表示）。
每次customer结构被删除时，其payment的值都被加入到总数中，并报告总数。
注意：应该可以直接使用Stack类而不作修改；
只需修改typedef声明，使Item的类型为customer，而不是unsigned long即可。
*/

Stack::Stack()
{
  top = 0;
}

bool Stack::isempty() const
{
  if ( top == 0 ) return true;
  else return false;
}

bool Stack::isfull() const
{
  if ( top == 10 ) return true;
  else return false;
}

bool Stack::push(customer & cust)
{
  if( this->isfull() )
  {
    return false;
  } else {
    cst[top] = cust;
    top++;
  }
  return true;
}

bool Stack::pop(customer & cust)
{
  if ( this->isempty() )
  {
    return false;
  } else {
    cust = cst[top];
    top--;
  }
  return true;
}