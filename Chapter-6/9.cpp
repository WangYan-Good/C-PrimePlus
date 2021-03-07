#include<iostream>
#include<fstream>
#include<cctype>
#include"6.h"
using namespace std;
/*
完成编程练习6，但从文件中读取所需的信息。
该文件的第一项应为捐款人数，余下的内容应为成对的行。
在每一对中，第一行为捐款人姓名，第二行为捐款数额。
即该文件类似于下面：
4
Sam Stone
2000
Freida Flass
100500
Tammy Tubbs
5000
Rich Raptor
55000
*/
int main()
{
  int mansum;
  string name;
  int acount;

  ifstream input;
  input.open("9.txt");
  input >> mansum;
  input.get();
  donateman dm[mansum];

  GrandPatrons* gphead = new GrandPatrons;
  gphead->donate = nullptr;
  gphead->next = nullptr;

  Patrons* pahead = new Patrons;
  pahead->donate = nullptr;
  pahead->next = nullptr;

  for( int index = 0; index <= mansum; index++ )
  {
    getline( input , name );
    //cout << name << endl;
    input >> acount;
    //cout << acount << endl;
    input.get();
    dm[index].name = name;
    dm[index].acount = acount;
    if ( dm[index].acount >= 10000 )
    {
      GrandPatrons* gp = new GrandPatrons;
      gp->donate = &dm[index];
      gp->next = nullptr;

      AddGrandNode( gphead, gp );
    } else if ( dm[index].acount < 10000 ) {
      Patrons* pa = new Patrons;
      pa->donate = &dm[index];
      pa->next = nullptr;

      AddPatNode( pahead, pa );
    }
  }
  cout << "Grand Patrons:" << endl;
  PrintGrandPatrons( gphead );
  cout << "Patrons:" << endl;
  PrintPatrons( pahead );
  return 0;
}
