#include "1.h"

bool Tv::volup()
{
  if( volume < Maxval )
  {
    volume++;
    return true;
  } else {
    return false;
  }
}

bool Tv::voldown()
{
  if( volume > Minval )
  {
    volume--;
    return true;
  } else {
    return false;
  }
}