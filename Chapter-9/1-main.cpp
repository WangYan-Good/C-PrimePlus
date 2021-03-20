#include<iostream>
#include"1.h"
#define golfLen 3

using namespace std;
int main()
{
//   int golfLen;
//   cout << "Enter golf arr length:";
//   cin >> golfLen;

  golf gl[golfLen];
  for ( int index = 0; index < golfLen; index++ )
  {
    cout << "Enter golf["<<index<<"].fullname:";
    cin >> gl[index].fullname;

    if ( gl[index].fullname == NULL ) break;

    cout << "Enter golf["<<index<<"].handicap:";
    cin >> gl[index].handicap;
  }

  int i = 0;
  while ( gl[i].fullname != NULL )
  {
    showgolf(gl[i]);
    i++;
  }
  return 0;
}
