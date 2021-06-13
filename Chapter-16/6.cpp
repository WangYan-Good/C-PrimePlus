#include "6.h"

bool newcustomer( double x )
{
    return ( std::rand() * x / RAND_MAX < 1 );
}