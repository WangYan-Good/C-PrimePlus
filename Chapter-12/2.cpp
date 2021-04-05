#include<cstring>
#include"2.h"
/*
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
    String(const String &);
    ~String();
    int length() const { return len; }
    void stringlow();
    void stringup();
    int has(char x);
    String & operator=(const String &);
    String & operator=(const char *);
    char & operator[] (int i);
    friend bool & operator<(const String & st1, const String &st2);
    friend bool & operator>(const String & st1, const String &st2);
    friend bool & operator==(const String & st1, const String &st2);
    friend ostream & operator<<(ostream & os, const String & st);
    friend istream & operator>>(istream & is, String & st);
    static int HowMany();
    String operator+(const String &) const;
    String operator+(const char *) const;
    friend String operator+(const char *, const String & st);
};
*/
String::String(const char * s)
{
    len = strlen(s);
    str = new char[len+1];
    strcpy(str,s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String & st)
{
    len = st.len;
    str = new char[len+1];
    strcpy_s(str, len+1, st.str);
    num_strings++;
}

String::~String()
{
    delete [] str;
    num_strings--;
}

void String::stringlow()
{
    int index = 0;
    while ( this->str[index] != '\0' )
    {
        this->str[index] = tolower(this->str[index]);
        index++;
    }
}

void String::stringup()
{
    int index = 0;
    while ( this->str[index] != '\0' )
    {
        this->str[index] = toupper(this->str[index]);
        index++;
    }
}

int String::has(char x)
{
    int count = 0;
    while ( this->str[count] != '\0' )
    {
        if ( str[count] == x ) count++;
    }
    return count++;
}

String & String::operator=(const String & st)
{
    len = st.len;
    str = new char[st.len + 1];
    strcpy_s( str, st.len+1, st.str );
    num_strings++;
    return *this;
}

String & String::operator=(const char * ct)
{
    this->len = strlen(ct);
    this->str = new char[this->len + 1];
    strcpy_s( this->str, this->len+1, ct );
    num_strings++;
    return *this;
}

char & String::operator[] (int i)
{
    return str[i];
}

bool & operator<(const String & st1, const String &st2)
{
    bool  result = strcmp(st1.str, st2.str)<0?true:false ;
    return result;
}

bool & operator>(const String & st1, const String &st2)
{
    bool  result = strcmp(st1.str, st2.str)>0?true:false ;
    return result;
}

bool & operator==(const String & st1, const String &st2)
{
    bool  result = strcmp(st1.str, st2.str)==0?true:false ;
    return result;
}

ostream & operator<<(ostream & os, const String & st)
{
    os << st.str << std::endl;
    return os;
}

istream & operator>>(istream & is, String & st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if(is)
    {
        st = temp;
    }
    while ( is && is.get() != '\n' )
    {
        continue;
    }
    return is;
}


String String::operator+(const String & st) const
{
    int total_len = len + st.len;
    char *temp = new char[total_len + 1];
    strcpy_s(temp, len + 1, str);
    strcpy_s(temp + len, st.len + 1, st.str);
    temp[total_len] = '\0';
    return String(temp);
}


String String::operator+(const char * s) const
{
    int total_len = len + strlen(s);
    char *temp = new char[total_len + 1];
    strcpy_s(temp, len + 1, str);
    strcpy_s(temp + len, std::strlen(s) + 1,s);
    temp[total_len] = '\0';
    return String(temp);
}
 
String operator+(const char * s, const String & st)
{
    return String(s) + st;
}