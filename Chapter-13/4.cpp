#include "4.h"
#include <cstring>
Port::Port( const char * br, const char * st, int b )
{
    brand = new char[strlen(br)+1];
    strcpy_s( brand, strlen(br)+1, br );

    strcpy_s( style, 20, st );

    bottles = b;
}

Port::Port( const Port & p )
{
    brand = new char[strlen(p.brand)+1];
    strcpy_s( brand, strlen(p.brand)+1, p.brand );

    strcpy_s( style, 20, p.style );

    bottles = p.bottles;
}

// Port::~Port()
// {
//     delete[] brand;
// }

Port & Port::operator=(const Port & p)
{
    if( this == &p ) return *this;
    
    delete[] brand;
    brand = new char[strlen(p.brand)+1];
    strcpy_s( brand, strlen(p.brand)+1, p.brand );

    this->bottles = p.bottles;

    strcpy_s( style, 20, p.style );

    return *this;
}

Port & Port::operator+=( int b )
{
    bottles += b;
    return *this;
}

Port & Port::operator-=( int b )
{
    bottles -= b;
    return *this;
}

void Port::Show() const
{
    cout << "brand: " << brand << endl;
    cout << "style: " << style << endl;
    cout << "bottles: " << bottles << endl;
}

ostream & operator<<( ostream & os, const Port & p )
{
    os << "brand: " << p.brand << endl;
    os << "style: " << p.style << endl;
    os << "bottles: " << p.bottles << endl;

    return os;
}

VintagePort::VintagePort():Port()
{
    nickname = new char[1];
    nickname[0] = '\0';

    year = 0;
}

VintagePort::VintagePort( const char* br, int b, const char* nn, int y ):Port( br, "VintagePort", b )
{
    nickname = new char[strlen(nn)+1];
    strcpy_s( nickname, strlen(nn)+1, nn );

    year = y;
}

VintagePort::VintagePort( const VintagePort & vp ):Port( vp )
{
    nickname = new char[strlen(vp.nickname)+1];
    strcpy_s( nickname, strlen(vp.nickname)+1, vp.nickname );

    year = vp.year;
}

VintagePort & VintagePort::operator=( const VintagePort & vp )
{
    if(this == &vp) return *this;

    delete[] nickname;
    nickname = new char[strlen(vp.nickname)+1];
    strcpy_s( nickname, strlen(vp.nickname)+1, vp.nickname );

    year = vp.year;

    Port::operator=(vp);

    return *this;
}

void VintagePort::Show() const
{
    Port::Show();
    cout << "nickname: " << nickname << endl;
    cout << "year: " << year << endl;
}

ostream & operator<<( ostream & os, const VintagePort & vp )
{
    os << (Port &)vp << endl;
    os << "nickname: " << vp.nickname << endl;
    os << "year: " << vp.year << endl;
    return os;
}