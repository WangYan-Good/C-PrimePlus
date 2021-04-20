#include "3.h"
#include <cstring>
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
    label = new char[strlen(rs.label)+1];
    strcpy_s( label, strlen(rs.label)+1, rs.label );

    rating = rs.rating;
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
    return *this;
}

std::ostream & operator<<( std::ostream & os, const baseDMA & rs )
{
    os << "label:" << rs.label << std::endl;
    os << "rating:" << rs.rating << std::endl;
    return os;
}

void baseDMA::View()
{
    std::cout<<*this << std::endl;
}

lacksDMA::lacksDMA( const char* c, const char* l, int r ):baseDMA( l, r )
{
    strcpy_s( color, COL_LEN, c );
}

lacksDMA::lacksDMA( const char* c, const baseDMA & rs ):baseDMA(rs)
{
    strcpy_s( color, COL_LEN, c );
}

lacksDMA::~lacksDMA()
{
    
}

lacksDMA & lacksDMA::operator=( const lacksDMA & rs )
{
    baseDMA::operator=(rs);
    strcpy_s( color, COL_LEN, rs.color );
    return *this;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
    os << (const baseDMA &)rs;
    os << "color:" << rs.color << std::endl;
    return os;
}

void lacksDMA::View()
{
    std::cout << *this << std::endl;
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

// hasDMA::hasDMA( const hasDMA & hs )
// {
//     *this = hs;
// }

hasDMA::~hasDMA()
{
    delete[] style;
}

hasDMA & hasDMA::operator=( const hasDMA & rs )
{
    baseDMA::operator=(rs);
    style = new char[strlen(rs.style)+1];
    strcpy_s( style, strlen(rs.style), rs.style );
    return *this;
}

std::ostream & operator<<( std::ostream & os, const hasDMA & rs )
{
    os << (const baseDMA &)rs ;
    os << "style:" << rs.style << std::endl;
    return os;
}

void hasDMA::View()
{
    std::cout << *this << std::endl; 
}