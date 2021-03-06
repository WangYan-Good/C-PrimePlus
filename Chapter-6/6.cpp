#include "6.h"
/*
编写一个程序，记录捐助给“维护合法权利团体”的资金。
该程序要求用户输入捐赠者数目，然后要求用户输入每一个捐献者的姓名和款项。
这些信息被储存在一个动态分配的结构数组中。每个结构有两个成员：用来储存姓名和字符数组（或string对象）和用来存储款项的double成员。
读取所有的数据后，程序将显示所有捐款超过10000的捐献者的姓名及其捐款数额。该列表前应包含一个标题，指出下面的捐款者是重要捐款人（Grand Patrons）。
然后，程序将列出其他的捐款者，该列表要以Patrons开头。如果某种类型没有捐献者，则程序将打印单词“none”。该程序只显示这两种类别，而不进行排序。
*/
int main()
{
    int DonaPers;
    cout << "Enter donate person number:";
    cin >> DonaPers;
    //
    //allocate for donate man && initialization
    //
    donateman dm[DonaPers];
    //
    //create Grand Partrons
    //
    GrandPatrons* gphead = new GrandPatrons;
    gphead->donate = nullptr;
    gphead->next = nullptr;
    //
    //create Patrons
    //
    Patrons* pahead = new Patrons;
    pahead->next = nullptr;
    pahead->next = nullptr;
    for( int index = 0; index < DonaPers; index++ )
    {
      //
      //initialization all of donate person
      //
      InitDona( &dm[index], gphead, pahead );
    }
    //
    //show Grand Patrons and Patrons
    //
    cout << "Grand Patrons:"<< endl;
    PrintGrandPatrons( gphead );
    cout << "Patrons:"<< endl;
    PrintPatrons( pahead );
    return 0;
}
