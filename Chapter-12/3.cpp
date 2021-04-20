#include"3.h"
#include<cstring>
#include<iostream>
/*
class Stock
{
private:
    char* company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const char* co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};
*/
Stock::Stock()
{
    company = new char[1];
    company[0] = '\0';
    shares = 0;
    share_val = 0;
    set_tot();
}

Stock::Stock(const char* co, long n, double pr )
{
    company = new char[strlen(co)+1];
    strcpy_s( company, strlen(co)+1, co );
    shares = n;
    share_val = pr;
    set_tot();
}

Stock::~Stock()
{
    delete [] company;
}

void Stock::buy( long num, double price )
{
    if ( num < 0 ) return;
    shares += num;
    share_val = price;
    set_tot();
}

void Stock::sell(long num, double price)
{
    shares -= num;
    share_val  = price;
    set_tot();
}

void Stock::update(double price)
{
    share_val = price;
    set_tot();
}

void Stock::show() const
{
    std::cout << "Company: " << company << std::endl;
    std::cout << "shares: " << shares << std::endl;
    std::cout << "price: " << share_val << std::endl;
    std::cout << "total: " << total_val << std::endl;
}

const Stock & Stock::topval(const Stock & s) const
{
    if ( s.total_val > total_val )
        return s;
    else
        return *this;
}