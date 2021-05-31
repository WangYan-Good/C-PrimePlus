#include "3.h"
#include<cmath>
bad::bad( const std::string & n, const std::string & s, double a, double b ) :  name(n), std::logic_error(s),v1(a),v2(b)
{
  
}

void bad::mesg(  )
{
  std::cout << "bad(" << v1 << " , " << v2 << " )\n";
}

double bad::getv1()
{
  return v1;
}

double bad::getv2()
{
  return v2;
}

bad_hmean::bad_hmean( const std::string & n, const std::string & s, double a, double b ):bad(n,s,a,b)
{

}

void bad_hmean::mesg(  )
{
  std::cout << "bad_hmean(" << bad::getv1() << " , " << bad::getv2() << " )\n";
}

bad_gmean::bad_gmean( const std::string & n, const std::string & s, double a, double b ):bad( n,s,a,b )
{

}

void bad_gmean::mesg()
{
  std::cout << "bad_gmean(" << bad::getv1() << " , " << bad::getv2() << " )\n";
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