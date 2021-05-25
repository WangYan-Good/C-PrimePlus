#include "1.h"
#include<iostream>
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

void Tv::chanup()
{
  channel++;
}

void Tv::chandown()
{
  if( channel >= 0 ) channel--;
}

void Tv::setting() const
{
  std::cout << "Tv is " << ( ( state == Off )?"Off":"On" ) << std::endl;
  if( state == On )
  {
    std::cout << "volume:" << volume << std::endl;
    std::cout << "channel:" << channel << std::endl;
    std::cout << ( (mode == Antenna)?"Antenna":"Cable" ) << std::endl;
    std::cout << ( (input == TV)?"TV":"DVD" ) << std::endl;
  }
}

void Tv::change_r_mode( Remote & r )
{
  r.r_mode = (r.r_mode == Remote::Normal)?(Remote::Interact):(Remote::Normal);
}

void Remote::show_r_mode()
{
  std::cout << "mode:" << ( (r_mode == Normal)?"Normal":"Interact" ) << std::endl;
}