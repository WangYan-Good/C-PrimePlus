#include "3.h"

ABC::ABC(/* args */)
{

}

ABC::~ABC()
{

}

baseDMA::baseDMA( const char* l , int r )
{
    label = new char[strlen(l)+1];
    strcpy_s( label, strlen(l)+1, l );

    rating = r;
}

baseDMA::baseDMA( const baseDMA & rs )
{
    *this=rs;
}

baseDMA::~baseDMA()
{
    delete[] label;
}

baseDMA & baseDMA::operator=( const baseDMA &rs )
{
    this->label = new char[strlen(rs.label)+1];
    strcpy_s( this->label, strlen(rs.label)+1, rs.label );

    this->rating = rs.rating;
}

std::ostream & operator<<( std::ostream & os, const baseDMA & rs )
{
    os << "label:" << rs.label;
    os << "rating:" << rs.rating;
    return os;
}

void baseDMA::View()
{
    std::cout<<label;
    std::cout<<rating;
}

lacksDMA::lacksDMA( const char* c, const char* l, int r ):baseDMA( l, r )
{
    strcpy_s( color, COL_LEN, c );
}

lacksDMA::lacksDMA( const char* c, const baseDMA & rs )
{
    baseDMA(rs);
    strcpy_s( color, COL_LEN, c );
}

lacksDMA::lacksDMA( const lacksDMA & rs )
{
    baseDMA(rs);
    strcpy_s( color, COL_LEN, rs.color );
}

lacksDMA::~lacksDMA()
{
    
}

lacksDMA & lacksDMA::operator=( const lacksDMA & rs )
{
    lacksDMA(rs);
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << "color:" << rs.color;
    return os;
}

void lacksDMA::View()
{
    std::cout << *this;
}

hasDMA::hasDMA( const char* s, const char* l, int r ):baseDMA(l,r)
{
    style = new char[strlen(s)+1];
    strcpy_s(style, strlen(s)+1, s);
}

hasDMA::hasDMA( const char* s, const baseDMA & rs ):baseDMA(rs)
{
    style = new char[strlen(s)+1];
    strcpy_s(style, strlen(s)+1, s);
}

hasDMA::~hasDMA()
{
    delete[] style;
}

hasDMA & hasDMA::operator=( const hasDMA & rs )
{

}

std::ostream & operator<<( std::ostream & os, const hasDMA & rs )
{

}

void hasDMA::View()
{

}