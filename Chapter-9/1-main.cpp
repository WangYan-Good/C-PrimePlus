#include"1.h"
// #define golfLen 3
using namespace std;

int main()
{
  int golfLen;
  cout << "Enter golf arr length:";
  cin >> golfLen;

  golf gl;
  golf * gf = new golf[golfLen];
  for ( int index = 0; index < golfLen; index++ )
  {
    if ( setgolf(gl) == 0 ) return 0;
    else {
      setgolf( gf[index], gl.fullname, gl.handicap );
    }
    showgolf( gl );
  }
  return 0;
}
