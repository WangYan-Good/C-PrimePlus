#include"5.h"
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

Stonewt operator+( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    Stonewt stonewt;
    stonewt.stone = stonewt1.stone + stonewt2.stone;
    stonewt.pounds = stonewt1.pounds + stonewt2.pounds;
    stonewt.pds_left = stonewt1.pds_left + stonewt2.pds_left;
    return stonewt;
}

Stonewt operator-( const Stonewt & stonewt1, const Stonewt & stonewt2 )
{
    Stonewt stonewt;
    stonewt.stone = stonewt1.stone - stonewt2.stone;
    stonewt.pounds = stonewt1.pounds - stonewt2.pounds;
    stonewt.pds_left = stonewt1.pds_left - stonewt2.pds_left;
    return stonewt;
}

Stonewt operator*( double n, const Stonewt & stonewt )
{
  Stonewt stnt;
  stnt.stone = n * stonewt.stone;
  stnt.pounds = n * stonewt.pounds;
  stnt.pds_left = n * stonewt.pds_left;
  return stnt;
}

Stonewt operator*( const Stonewt & stonewt, double n )
{
  Stonewt stnt;
  stnt.stone = n * stonewt.stone;
  stnt.pounds = n * stonewt.pounds;
  stnt.pds_left = n * stonewt.pds_left;
  return stnt;
}

std::ostream & operator<<( std::ostream & os, const Stonewt & stonewt )
{
  os << "stone:" << stonewt.stone << std::endl;
  os << "pounds:" << stonewt.pounds << "." << stonewt.pds_left << std::endl;
  return os;
}