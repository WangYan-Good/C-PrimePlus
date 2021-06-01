#include "2.h"
#include<cmath>
bad_hmean::bad_hmean( const std::string & n, const std::string & s, double a, double b ):name(n), std::logic_error(s),v1(a),v2(b)
{
  
}

inline void bad_hmean::mesg()
{
  std::cout << "hmen( " << v1 << " , " << v2 << " ): " << "invalid arguments: a = -b\n";
}

bad_gmean::bad_gmean( const std::string & n, const std::string & s, double a, double b ):name(n),std::logic_error(s),v1{a},v2(b)
{
  
}

inline const char * bad_gmean::mesg()
{
  return "gmean() arguments should be >= 0\n";
}

double hmean( double a, double b )
{
  if( a == -b )
  {
    throw bad_hmean( "hmean", "Error in hmean()\n", a, b );
  }
  return 2.0 * a * b / (a+b);
}

double gmean( double a, double b )
{
  if( a < 0 || b < 0 )
  {
    throw bad_gmean( "gmean", "Error in gmean()\n", a, b );
  }
  return std::sqrt( a * b );
}