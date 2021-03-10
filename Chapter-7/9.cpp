#include<iostream>
using namespace std;
/*
9.这个练习让您编写处理数组和结构的函数。下面是程序的框架，请提供其中描述的函数，以完成该程序。
#include ciostream>
using namespace std;
const int SLEN = 30 ;
struct student{
  char ful1name [SLEN];
  char hobby [SLEN];
  int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits andl
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name.The function returns the actual number of array elements1
// filled.
int getinfo(student pa[], int n) ;

// display1( takes a student structure as an argumentl
//and displays its contents
void display1 (student st};

// display2() takes the address of student structure as an
// argument and displays the structure's contents
void display2 (const student * ps);

// display3 ( takes the address of the first element of an arrayl
// of student structures and the number of array elements as
//arguments and displays the contents of the structures
void display3 (const student pa[], int n);

int main()
{
  cout <<"Enter class size: ";
  int class_size;
  cin  class_size;
  while (cin.get() != '\n')
    continue;
  student * ptr_stu = new student [class_size];
  int entered - getinfo(ptr_stu,class_size);
  for (int i = 0; i c entered; i++)
  {
    display1(ptr_stu[i]);
    display2(&ptr_stu [i]);
  }
  display3 (ptr_stu,entered);
  delete [ptr_stu;
  cout <<"Doneln" ;
  return 0;
}

*/
const int SLEN = 30 ;
struct student{
  char fullname [SLEN];
  char hobby [SLEN];
  int ooplevel;
};
// getinfo() has two arguments: a pointer to the first element of
// an array of student structures and an int representing the
// number of elements of the array. The function solicits andl
// stores data about students. It terminates input upon filling
// the array or upon encountering a blank line for the student
// name.The function returns the actual number of array elements1
// filled.
int getinfo(student pa[], int n) ;

// display1( takes a student structure as an argumentl
//and displays its contents
void display1 (student st);

// display2() takes the address of student structure as an
// argument and displays the structure's contents
void display2 (const student * ps);

// display3 ( takes the address of the first element of an arrayl
// of student structures and the number of array elements as
//arguments and displays the contents of the structures
void display3 (const student pa[], int n);

int main()
{
  cout <<"Enter class size: ";
  int class_size;
  cin >> class_size;
  while (cin.get() != '\n')
    continue;
  student * ptr_stu = new student [class_size];
  int entered = getinfo(ptr_stu,class_size);
  for (int i = 0; i < entered; i++)
  {
    display1(ptr_stu[i]);
    display2(&ptr_stu [i]);
  }
  display3 (ptr_stu,entered);
  delete [] ptr_stu;
  cout <<"Done\n" ;
  return 0;
}

int getinfo(student pa[], int n)
{
    int count = 0;
    for (int i = 0; i<n; i++)
    {
      cout << "Please enter the fullname:";
      cin.getline(pa[i].fullname, 30);
      cout << "Please enter the hobby:";
      cin >> pa[i].hobby;
      cout << "Please enter the ooplevel:";
      cin >> pa[i].ooplevel;
      cin.get();
      count++;
    }
    cout << "Enter end!" << endl;;
    return count;

}

void display1 (student st)
{
  cout << "\ndisplay1:\nFullName:" << st.fullname << "\nhobby:" << st.hobby<< "\nooplevel:" << st.ooplevel << endl;

}

void display2 (const student * ps)
{
  cout << "\ndispaly2:\nFullName:" << ps->fullname << "\nhobby:" << ps->hobby<< "\nooplevel:" << ps->ooplevel << endl;
}

void display3 (const student pa[], int n)
{
  cout << "\ndispaly3:" << endl;
    for (int i = 0; i<n; i++)
      cout << i << "::\nFullName:" << pa[i].fullname << "\nhobby:" << pa[i].hobby << "\nooplevel:" << pa[i].ooplevel << endl;

}
