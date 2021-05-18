/**
  采用私有继承而不是包含来完成编程练习1.
  同样，一些typedef可能会有所帮助，另外，您可能还需要考虑诸如下面这样的语句的含义：
  PairArray::operator=(PairArray(ArrayInt(), ArrayInt()));
  cout << (const string &)(*this);
  您设计的类应该可以使用编程练习1中的测试程序进行测试。
**/
#include "2.h"
int main( void )
{
    using std::cin;
    using std::cout;
    using std::endl;

    cout << "Enter name of wine: ";
    char lab[50];
    cin.getline(lab,50);
    cout << "Enter number of years: ";
    int yrs;
    cin >> yrs;

    Wine holding(lab,yrs); //store label, years arrays yrs elements
    holding.GetBottles();  //solicit input for years, bottle count
    holding.Show();        //display object contents

    const int YRS = 3;

    int y[YRS] = {1993, 1995, 1998};
    int b[YRS] = {48, 60, 72};
    //create new object, initialize using data in arrays y and b
    Wine more("Gushing Grape Red", YRS, y, b);
    more.Show();
    cout << "Total bottles for " << more.Label() //use Label() method
         << ": " << more.sum() << endl;          //use sum() method
    cout << "Bye\n";
    return 0;
}