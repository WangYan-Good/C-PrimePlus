#include <iostream>
using namespace std;
struct bop{
  string fullname;
  string title;
  string bopname;
  int preference;
};

void initbop( bop** bopvariable )
{
  *bopvariable = new bop;
  cout << "Enter fullname: " ;
  cin >> (*bopvariable)->fullname ;

  cout << "Enter title: ";
  cin >> (*bopvariable)->title ;

  cout << "Enter bopname:";
  cin >> (*bopvariable)->bopname ;

  cout << "Enter preference:";
  cin >> (*bopvariable)->preference;
}

void displayByPreference( bop* bopvariable , int preference )
{
  switch(preference)
  {
    case 1:
      cout << bopvariable->fullname << endl;
      break;
    case 2:
      cout << bopvariable->title << endl;
      break;
    case 3:
      cout << bopvariable->bopname << endl;
      break;
    default:
      break;
  }
}
