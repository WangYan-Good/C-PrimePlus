#include"7.h"
Complex::Complex()
{
  real = 0;
  ima = 0;
}

Complex::Complex( double r, double i )
{
  real = r;
  ima = i;
}

Complex operator+( const Complex & cplx1, const Complex & cplx2 )
{
  Complex complex;
  complex.real = cplx1.real + cplx2.real;
  complex.ima = cplx1.ima + cplx2.ima;
  return complex;
}

Complex operator-( const Complex & cplx1, const Complex & cplx2 )
{
  Complex complex;
  complex.real = cplx1.real - cplx2.real;
  complex.ima = cplx1.ima - cplx2.ima;
  return complex;
}

Complex operator*( const Complex & cplx1, const Complex & cplx2 )
{
  Complex complex;
  complex.real = cplx1.real*cplx2.real - cplx1.ima*cplx2.ima;
  complex.ima = cplx1.real*cplx2.ima + cplx1.ima*cplx2.real;
  return complex;
}

Complex operator*( double n, const Complex & cplx )
{
  Complex complex;
  complex.real = n * cplx.real;
  complex.ima = n * cplx.ima;
  return complex;
}

Complex operator*( const Complex & cplx, double n )
{
  Complex complex;
  complex.real = n * cplx.real;
  complex.ima = n * cplx.ima;
  return complex;
}

std::ostream & operator<<( std::ostream & os, const Complex & cplx )
{
  os << "real:" << cplx.real << std::endl;
  os << "ima:" << cplx.ima << std::endl;
  return os;
}

Complex::~Complex()
{
}