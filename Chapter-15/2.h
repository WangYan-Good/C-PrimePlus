#ifndef _CHAPTER_15_2_H_
#define  _CHAPTER_15_2_H_

#include<iostream>
#include<exception>
#include<string>

class bad_hmean : public std::logic_error
{
  private:
    std::string  name;
    double       v1;
    double       v2;
  public:
    explicit bad_hmean( const std::string & n = "hmean", const std::string & s = "Error in hmean()\n", double a = 0, double b = 0 );
    void mesg();
    const char * what() { return "bad arguments in hmean()\n"; }
    virtual ~bad_hmean() throw() {}
};

class bad_gmean : public std::logic_error
{
  private:
    std::string name;
  public:
    double v1;
    double v2;
    explicit bad_gmean( const std::string & name = "gmean", const std::string & s = "Error in gmean()\n", double a = 0, double b = 0 );
    const char * mesg();
    const char * what() { return "bad arguments in gmean()\n"; }
    virtual ~bad_gmean() throw() {}
};

double hmean( double a, double b );
double gmean( double a, double b );

#endif