#include<iostream>
#include<cstring>
using namespace std;
/*
下面是一个非常简单的类定义：
class Person {
private:
  static const LIMIT = 25;
  string lname;    //Person's last name
  char fname[LIMIT]; //Person's first name
public:
  Person() { lname = ""; fname[0] = '\0'; } //#1
  Person() { const string & ln , const char * fn = "Heyyou" }; //#2

// the following methods display lname and fname
  void Show() const; //lsatname firstname format

};
它使用了一个string对象和一个字符数组，让您能够比较它们的用法。请提供未定义的方法的代码，以完成这个类的实现。
再编写一个使用这个类的程序，它使用了三种可能的构造函数调用（没有参数、一个参数和两个参数）以及两种显示方法。下面是一个使用这些构造函数和方法的例子：

Person one;                                     // use default constructor

Person two("Smythecraft");             // use #2 with one default argument

Person three(:Dimwiddy", "Sam");  // use #2, no defaults

one.Show();

cout << endl;

one.FormalShow();

// etc. for two and three
*/
class Person {
private:
  static const int LIMIT = 25;
  string lname;    //Person's last name
  char fname[LIMIT]; //Person's first name
public:
  Person() { lname = ""; fname[0] = '\0'; }  //#1
  Person( const string & ln , const char * fn = "Heyyou" );  //#2
  // {
  //   lname = ln;
  //   strcpy( fname, fn );
  // }

// the following methods display lname and fname
  void Show() const; //lsatname firstname format

};

Person::Person( const string & ln , const char * fn )
{
  lname = ln;
  strcpy( fname, fn );
}

void Person::Show() const
{
  cout << "name:" << fname << " " << lname << endl;
}

int main()
{
  Person one; // use default constructor
  one.Show();

  Person two("Smythecraft"); // use #2 with one default argument
  two.Show();

  Person three("Dimwiddy", "Sam"); // use #2, no defaults
  three.Show();
  return 0;
}
