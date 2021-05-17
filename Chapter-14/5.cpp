#include "5.h"
abstr_emp::abstr_emp()
{
    fname = "None";
    lname = "None";
    job = "None";
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
{
    fname = fn;
    lname = ln;
    job = j;
}

void abstr_emp::ShowAll() const
{

}

void abstr_emp::SetAll()
{

}

std::ostream & operator<< ( std::ostream & os, const abstr_emp & e )
{

}

abstr_emp::~abstr_emp()
{

}

employee::employee():abstr_emp()
{

}

employee::employee( const std::string & fn, const std::string & ln, const std::string & j ):abstr_emp( fn, ln, j )
{

}

void employee::ShowAll() const
{

}

void employee::SetAll()
{

}

manager::manager()
{

}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j , int ico ):abstr_emp( fn, ln, j )
{

}

manager::manager(const abstr_emp & e, int ico)
{

}

manager::manager( const manager & m )
{

}

void manager::ShowAll() const
{

}

void manager::SetAll()
{
    
}