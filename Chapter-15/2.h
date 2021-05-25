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
    explicit bad_hmean( const std::string & name = "hmean", const std::string & s = "Error in hmean()\n", double a = 0, double b = 0 );

};

class bad_gmen : public std::logic_error
{
  private:

  public:

};

#endif