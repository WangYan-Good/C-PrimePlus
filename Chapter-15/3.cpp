#include "3.h"

bad_error::bad_error( const std::string & s, double a, double b ):std::logic_error(s),v1(a),v2(b)
{
  
}

inline void bad_error::mesg()
{
  std::cout << "bad_error(" << v1 << " , " << v2 << " )\n";
}
