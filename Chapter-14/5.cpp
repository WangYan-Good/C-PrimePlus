#include "5.h"
abstr_emp::abstr_emp()
{
    fname = "None";
    lname = "None";
    job = "None";
}

abstr_emp::abstr_emp( const abstr_emp & e )
{
    fname = e.fname;
    lname = e.lname;
    job = e.job;
}

abstr_emp::abstr_emp(const std::string & fn, const std::string & ln, const std::string & j)
{
    fname = fn;
    lname = ln;
    job = j;
}

void abstr_emp::ShowAll() const
{
    std::cout << "first name: " << fname << std::endl;
    std::cout << "last name: " << lname << std::endl;
    std::cout << "job: " << job << std::endl << std::endl;
}

void abstr_emp::SetAll()
{
    std::cout << "Input first name: ";
    std::cin >> fname;
    std::cout << "Input last name: ";
    std::cin >> lname;
    std::cout << "Input job: ";
    std::cin >> job;
}

std::ostream & operator<< ( std::ostream & os, const abstr_emp & e )
{
    os << "first name: " << e.fname;
    os << "last name: " << e.lname;
    os << "job: " << e.job;
    return os;
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
    abstr_emp::ShowAll();
}

void employee::SetAll()
{
    abstr_emp::SetAll();
}

manager::manager():abstr_emp()
{
    inchargeof = 0;
}

manager::manager(const std::string & fn, const std::string & ln, const std::string & j , int ico ):abstr_emp( fn, ln, j )
{
    inchargeof = ico;
}

manager::manager(const abstr_emp & e, int ico):abstr_emp(e)
{
    inchargeof = ico;
}

manager::manager( const manager & m ):abstr_emp(m)
{
    inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "numbers of abstr_emps managed: " << inchargeof << std::endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "numbers of abstr_emps managed: ";
    std::cin >> inchargeof;
}

fink::fink()
{

}

fink::fink( const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo )
{

}

fink::fink( const abstr_emp & e, const std::string & rpo )
{

}

fink::fink( const fink & e )
{

}

void fink::ShowAll() const
{

}

void fink::SetAll()
{

}

highfink::highfink()
{

}

highfink::highfink (const std::string & fn , const std::string & ln, const std::string & j, const std::string & rpo, int ico)
{

}

highfink::highfink (const abstr_emp & e, const std::string & rpo, int ico)
{

}

highfink::highfink (const fink & ff, int ico)
{

}

highfink::highfink (const manager & m, const std::string & rpo)
{

}

highfink::highfink (const highfink & h)
{

}

void highfink::ShowAll() const
{

}

void highfink::SetAll()
{
    
}