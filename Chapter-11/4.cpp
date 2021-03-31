#include"4.h"
Time::Time()
{
  hours = 0;
  minutes = 0;
}

Time::Time( int h, int m )
{
  hours = h;
  minutes = m;
}

void Time::AddHr(int h)
{
  hours += h;
}

void Time::AddMin(int m)
{
  minutes += m;
}

void Time::Reset( int h, int m )
{
  hours = h;
  minutes = m;
}

Time operator+( const Time & t1, const Time & t2 )
{
  Time newt;
  newt.hours = t1.hours + t2.hours;
  newt.minutes = t1.minutes + t2.minutes;
  return newt;
}

Time operator-( const Time & t1, const Time & t2 )
{
  Time newt;
  newt.hours = t1.hours - t2.hours;
  newt.minutes = t1.minutes - t2.minutes;
  return newt;
}

Time operator*( double n , const Time & t )
{
  Time newt;
  newt.hours *= n;
  newt.minutes *= n;
  return newt;
}

std::ostream & operator<<( std::ostream & os, const Time & t )
{
  os << "hours:" << t.hours << std::endl;
  os << "minutes:" << t.minutes << std::endl;
  return os;
}

Time::~Time()
{
}

