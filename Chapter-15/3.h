#ifndef _CHAPTER_15_3_H_
#define _CHAPTER_15_3_H_

#include <iostream>
#include <exception>

class bad : public std::logic_error
{
  private:
    std::string  name;
    double       v1;
    double       v2;
  public:
    explicit bad( const std::string & n, const std::string & s = "Error in bad()\n", double a = 0, double b =0 );
    void mesg();
    const char * what() { return "bad happened!\n"; }
    virtual ~bad() throw() {}
};

class bad_hmean : public bad
{
  public:
    explicit bad_hmean( const std::string & n, const std::string & s = "Error in h_mean()\n", double a = 0, double b = 0 );
};

class bad_gmean : public bad
{
  
};

#endif