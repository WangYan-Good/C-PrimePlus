#include "5.h"

template<class T>
int reduce(T ar[], int n)
{
  std::sort( &ar[0], &ar[n] );
  T * new_ar = std::unique( &ar[0], &ar[n] );
  return new_ar - ar;
}