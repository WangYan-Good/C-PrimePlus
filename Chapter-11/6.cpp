#include"6.h"
Stonewt::Stonewt()
{
    stone = pounds = pds_left = 0;
    state = 3;
}

Stonewt::Stonewt( double lbs )
{
  stone = int(lbs)/Lbs_per_stn;
  pds_left = int(lbs) % Lbs_per_stn + lbs - int(lbs);
  pounds = lbs;
}

Stonewt::Stonewt( int stn, double lbs )
{
  stone = stn;
  pds_left = lbs;
  pounds = stn*Lbs_per_stn + lbs;
}

Stonewt::~Stonewt()
{

}

bool operator<( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    bool result;
    result = stonewt1.pounds<stonewt2.pounds?true:false;
    return result;
}

bool operator>( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    bool result;
    result = stonewt1.pounds>stonewt2.pounds?true:false;
    return result;
}

bool operator>=( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    bool result;
    result = stonewt1.pounds>=stonewt2.pounds?true:false;
    return result;
}

bool operator<=( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    bool result;
    result = stonewt1.pounds<=stonewt2.pounds?true:false;
    return result;
}

bool operator==( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    bool result;
    result = stonewt1.pounds==stonewt2.pounds?true:false;
    return result;
}

bool operator!=( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    bool result;
    result = stonewt1.pounds!=stonewt2.pounds?true:false;
    return result;
}

std::ostream & operator<<( std::ostream & os, const Stonewt & stonewt )
{
  os << "stone:" << stonewt.stone << std::endl;
  os << "pounds:" << stonewt.pounds << "." << stonewt.pds_left << std::endl;
  return os;
}