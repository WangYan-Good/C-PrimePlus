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
    // void show_lbs() const;
    // void show_stn() const;
    friend bool operator<( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend bool operator>( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend bool operator>=( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend bool operator<=( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend bool operator==( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend bool operator!=( const Stonewt & stonewt1, const Stonewt & stonewt2 );
    friend std::ostream & operator<<( std::ostream & os, const Stonewt & stonewt );
};
#endif
