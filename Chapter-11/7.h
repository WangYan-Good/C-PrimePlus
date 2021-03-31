#ifndef _COMPLEX_H_
#define _COMPLEX_H_
#include<iostream>
class Complex
{
private:
    double real;
    double ima;
public:
    Complex();
    Complex( double r, double i );
    friend Complex operator+( const Complex & cplx1, const Complex & cplx2 );
    friend Complex operator-( const Complex & cplx1, const Complex & cplx2 );
    friend Complex operator*( const Complex & cplx1, const Complex & cplx2 );
    friend Complex operator*( double n, const Complex & cplx );
    friend Complex operator*( const Complex & cplx, double n );
    friend std::ostream & operator<<( std::ostream & os, const Complex & cplx );
    ~Complex();
};

#endif
