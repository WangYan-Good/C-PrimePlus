#include "4.h"

int reduce(long ar[], int n)
{
  std::sort( ar, ar+n );
  long * new_ar = std::unique( ar, ar+n );
  return new_ar - ar;
}