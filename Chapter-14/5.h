#ifndef _CHAPTER_14_5_H_
#define _CHAPTER_14_5_H_

#include <iostream>
#include <string>
class abstr_emp
{
  private:
    std::string fname; // abstr__emp's first name
    std::string lname; // abstr_emp's last name
    std::string job;   
  public:
    abstr_emp();
    abstr_emp(const std::string & fn, const std::string & ln,
    const std::string & j);
    virtual void ShowAll() const; // labels and shows all data
    virtual void SetAll(); // prompts user for values
    friend std::ostream & operator<< (std::ostream & os, const abstr_emp & e );
    // just displays first and last name
    virtual ~abstr_emp() = 0; // virtual base class
};

class employee:public abstr_emp
{
  public:
    employee();
    employee(const std::string & fn, const std::string & ln,
            const std::string & j);
    virtual void ShowAll() const;
    virtual void SetAll();
};

class manager:virtual public abstr_emp
{
  private:
    int inchargeof; // number of abstr_emps managed
  protected:
    int InChargeOf() const { return inchargeof; } // output
    int & InChargeOf(){ return inchargeof; } // input
  public:
    manager();
    manager(const std::string & fn, const std::string & ln,
    const std::string & j , int ico = 0 );
    manager(const abstr_emp & e, int ico);
    manager(const manager & m );
    virtual void ShowAll() const;
    virtual void SetAll();
};

#endif