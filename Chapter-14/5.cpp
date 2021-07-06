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
    std::cout << "numbers of abstr_emps managed: " << inchargeof << std::endl << std::endl;
}

void manager::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "numbers of abstr_emps managed: ";
    std::cin >> inchargeof;
}

fink::fink():abstr_emp()
{
    reportsto = "None";
}

fink::fink( const std::string & fn, const std::string & ln, 
            const std::string & j, const std::string & rpo ):abstr_emp( fn, ln, j )
{
    reportsto = rpo;
}

fink::fink( const abstr_emp & e, const std::string & rpo ):abstr_emp(e)
{
    reportsto = rpo;
}

fink::fink( const fink & e ):abstr_emp(e)
{
    reportsto = e.reportsto;
}

void fink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "reportsto: " << reportsto << std::endl << std::endl;
}

void fink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "Input reporsto: ";
    std::cin >> reportsto;
}

highfink::highfink():abstr_emp(), manager(), fink()
{

}

highfink::highfink (const std::string & fn , const std::string & ln, 
                    const std::string & j, const std::string & rpo, int ico):abstr_emp( fn, ln, j ), manager( fn, ln, j, ico ), fink( fn, ln, j, rpo )
{

}

highfink::highfink (const abstr_emp & e, const std::string & rpo, int ico):abstr_emp(e), manager( e, ico ), fink( e, rpo )
{

}

highfink::highfink (const fink & ff, int ico):fink(ff), manager( (const employee &)ff, ico )
{

}

highfink::highfink (const manager & m, const std::string & rpo):manager( m ), fink( (const employee &)m, rpo )
{

}

highfink::highfink (const highfink & h):abstr_emp(h), manager(h), fink(h)
{

}

void highfink::ShowAll() const
{
    abstr_emp::ShowAll();
    std::cout << "reportsto: " << fink::ReportsTo() << std::endl ;
    std::cout << "inchargeof: " << manager::InChargeOf() << std::endl << std::endl ;
}

void highfink::SetAll()
{
    abstr_emp::SetAll();
    std::cout << "inchargeof: ";
    std::cin >> manager::InChargeOf();

    std::cout << "reporsto: ";
    std::cin >> fink::ReportsTo();
}