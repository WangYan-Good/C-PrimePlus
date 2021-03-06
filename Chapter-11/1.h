#ifndef _VECTOR_H_
#define _VECTOR_H_
#include <iostream>
namespace VECTOR
{
  class Vector
  {
    public:
      enum Mode {RECT, POL};
    //RECT for rectangular, POL for Polar modes
    private:
      double x;    //horizontal value
      double y;    //vetical value
      double mag;  //length for vector
      double ang;  //direction of vector in degrees
      Mode   mode;
    //private methods for setting values
      void set_mag();
      void set_ang();
      void set_x();
      void set_y();
    public: 
      Vector();
      Vector( double n1, double n2, Mode from = RECT );
      void reset( double n1, double n2, Mode from = RECT);
      ~Vector();
      double xval() const { return x; }
      double yval() const { return y; }
      double magval() const { return mag; }
      double angval() const { return ang; }
      void polar_mode();
      void rect_mode();
 
      Vector operator+(const Vector & b) const;
      Vector operator-(const Vector & b) const;
      Vector operator-() const;
      Vector operator*(double n) const;
 
      friend Vector operator*(double n, const Vector & a);
      friend std::ostream & operator<<(std::ostream & os, const Vector & v);
  };
};

#endif