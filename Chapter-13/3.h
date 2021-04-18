#ifndef _DMA_H_
#define _DMA_H_
#include<ostream>
class ABC
{
private:
    /* data */
public:
    ABC(/* args */);
    ~ABC();
    virtual void View() = 0;
};

class baseDMA : public ABC
{
private:
    /* data */
    char* label;
    int rating;
public:
    baseDMA( const char* l = "null", int r = 0 );
    baseDMA( const baseDMA & rs );
    virtual ~baseDMA();
    baseDMA & operator=( const baseDMA &rs );
    friend std::ostream & operator<<( std::ostream & os, const baseDMA & rs );
    virtual void View();
};

class lacksDMA : public baseDMA
{
private:
    /* data */
    enum{ COL_LEN = 40 };
    char color[COL_LEN];
public:
    lacksDMA( const char* c = "blank", const char* l = "null", int r = 0 );
    lacksDMA( const char* c, const baseDMA & rs );
    virtual ~lacksDMA();
    lacksDMA & operator=( const lacksDMA & rs );
    friend std::ostream & operator<<(std::ostream & os, const lacksDMA & rs);
    virtual void View();
};

class hasDMA : public baseDMA
{
private:
    char* style;
public:
    hasDMA( const char* s = "none", const char* l = "null", int r = 0 );
    hasDMA( const char* s, const baseDMA & rs );
    virtual ~hasDMA();
    hasDMA & operator=( const hasDMA & rs );
    friend std::ostream & operator<<( std::ostream & os, const hasDMA & rs );
    virtual void View();
};

#endif