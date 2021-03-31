#ifndef _STONEWT_H_
#define _STONEWT_H_
#include<iostream>
class Stonewt
{
  private:
    enum{ Lbs_per_stn = 14 };
    int state;
    int stone;
    double pds_left;
    double pounds;
  public:
    Stonewt();
    Stonewt( int stn, double lbs );
    Stonewt(double lbs);
    ~Stonewt();
    friend Stonewt operator+( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend Stonewt operator-( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend Stonewt operator*( double n, const Stonewt & stonewt );
    friend Stonewt operator*( const Stonewt & stonewt, double n );
    friend std::ostream & operator<<( std::ostream & os, const Stonewt & stonewt );
};
#endif
