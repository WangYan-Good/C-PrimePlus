#ifndef _STRING2_H_
#define _STRING2_H_
#include<iostream>
using std::ostream;
using std::istream;
class String
{
private:
    char * str;
    int len;
    static int num_strings;
    static const int CINLIM = 80;
public:
    String(const char * s);
    String();
    String(const String & st);
    ~String();
    int length() const { return len; }
    void stringlow();
    void stringup();
    int has(char x);
    String & operator=(const String & st);
    String & operator=(const char * ct);
    char & operator[] (int i);
    friend bool & operator<(const String & st1, const String &st2);
    friend bool & operator>(const String & st1, const String &st2);
    friend bool & operator==(const String & st1, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    static int HowMany();
    String operator+(const String & st) const;
    String operator+(const char * s) const;
    friend String operator+(const char * s, const String & st);
};
#endif