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
    
}

void baseDMA::View()
{

}

lacksDMA::lacksDMA( const char* c = "blank", const char* l = "null", int r = 0 )
{

}

lacksDMA::lacksDMA( const char* c, const baseDMA & rs )
{

}

lacksDMA::~lacksDMA()
{

}

lacksDMA & lacksDMA::operator=( const lacksDMA & rs )
{

}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{

}

void lacksDMA::View()
{

}

hasDMA::hasDMA( const char* s, const char* l, int r )
{

}

hasDMA::hasDMA( const char* s, const baseDMA & rs )  
{

}

hasDMA::~hasDMA()
{

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