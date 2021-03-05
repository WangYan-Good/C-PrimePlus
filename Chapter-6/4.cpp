#include "4.h"
/*
加入Benevolent Order of Programmer后，在BOP大会上，人们便可以通过加入者的真实姓名、头衔或秘密BOP姓名了解他（她）。请编写一个程序，可以使用真实姓名、头衔、秘密姓名或成员偏好来列出成员。编写该程序时，请使用下面的结构：

// Benevolent Order of Programmer name structure 

struct bop {

    char fullname[strsize];      // real name

    char title[strsize];              // job title

    char bopname[strsize];     // secret BOP name

    int preference;                  // 0 = fullname, 1 = title, 2 = bopname

};

该程序创建一个由上述结构组成的小型数组，并将其初始化为适当的值。另外，该程序使用一个循环，让用户在下面的选项中进行选择：

a. display by name        b. display by title

c. display by bopname  d. display by preference

q. quit

注意，“display by preference”并不意味着显示成员的偏好，而是意味着根据成员的偏好来列出成员。例如，如果偏好号为1，则选择d将显示程序员的头衔。该程序的运行情况如下：

Benevolent Order Programmer Report 

 

a. display by name        b. display by title

c. display by bopname  d. display by preference

q. quit

Enter your choice: a

Wimp Macho

Raki Rhodes

Celia Laiter

Hoppy Hipman

Pat Hand

Next choice: d

Wimp Macho

Junior Programmer

MIPS 

Analyst Trainee

LOOPY

Next choice: q

Bye!
*/

int main()
{
  char option;
  const int num = 3;
  bool  BREAK;
  //
  // initialization struct
  //
  bop* programmer = new bop[num];
  for( int index = 0; index < num; index ++ )
  {
    initbop( &programmer[index] );
    cout << endl;
  }
/*
  for(  int index = 0; index < 3; index ++ )
  {
    putbop( programmer[index] );
  }
*/

  cout << "Benevolent Order Programmer Report " << endl;
  cout << "a. display by name    b. display by title "<<endl << "c. display by bopname    d. display by preference" << endl << "q. quit" << endl;
  cout << "Enter your choice: ";

  while ( true )
  {
    cin >> option;
    switch( option )
    {
      case 'a':
        //show bop name
        for (int index = 0; index < num; index++)
        {
            cout << programmer[index].fullname << endl;
        }
        BREAK = false;
        break;
      case 'b':
        //display bop title
        for ( int index = 0; index < num; index++ )
        {
            cout << programmer[index].title << endl;
        }
        BREAK = false;
        break;
      case 'c':
        //display bop bopname
        for ( int index = 0; index < num; index++ )
        {
            cout << programmer[index].bopname << endl;
        }
        BREAK = false;
        break;
      case 'd':
        //display bop by perference
        for ( int index = 0; index < num; index++ )
        {
            displayByPreference( programmer[index],programmer[index].preference );
        }
        BREAK = false;
        break;
      case 'q':
        BREAK = true;
        break;
    }
    if ( BREAK ) break;
    cout << "Next choice: ";
  }

  return 0;
}
