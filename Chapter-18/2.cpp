#include "2.h"

Cpmv::Cpmv( std::string q, std::string z )
{
    pi = new Info();
    pi->qcode = q;
    pi->zcode = z;
}

Cpmv::Cpmv( const Cpmv & cp )
{
    pi = new Info();
    pi->qcode = cp.pi->qcode;
    pi->zcode = cp.pi->zcode;
}

Cpmv::Cpmv( Cpmv && mv )
{
    pi = new Info();
    pi->qcode = mv.pi->qcode;
    pi->zcode = mv.pi->zcode;
}

Cpmv::~Cpmv()
{
    delete pi;
}

Cpmv & Cpmv::operator=( const Cpmv & cp )
{

}

Cpmv & Cpmv::operator=( Cpmv && mv )
{

}

Cpmv Cpmv::operator+( const Cpmv & obj ) const
{

}

void Cpmv::Display() const 
{
    
}

