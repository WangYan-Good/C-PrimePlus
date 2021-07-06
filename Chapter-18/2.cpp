#include "2.h"

Cpmv::Cpmv()
{
    pi = new Info();
    pi->qcode = nullptr;
    pi->zcode = nullptr;
}

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
    this->pi->qcode = cp.pi->qcode;
    this->pi->zcode = cp.pi->zcode;
    return *this;
}

Cpmv & Cpmv::operator=( Cpmv && mv )
{
    this->pi->qcode = mv.pi->qcode;
    this->pi->zcode = mv.pi->zcode;
    return *this;
}

Cpmv Cpmv::operator+( const Cpmv & obj ) const
{
    this->pi->qcode += obj.pi->qcode;
    this->pi->zcode += obj.pi->zcode;
    return *this;
}

void Cpmv::Display() const 
{
    std::cout << "qcode: " << pi->qcode << std::endl;
    std::cout << "zcode: " << pi->zcode << std::endl << std::endl;
}

