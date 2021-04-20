#include"1.h"
#include<cstring>
#include<iostream>
Cow::Cow()
{
    strcpy_s(name, "");
    hobby = nullptr;
    weight = 0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
    int strlength = strlen(ho);
    hobby = new char[strlength+1];
    strcpy_s(name, nm);
    strcpy(hobby, ho);
    weight = wt;
}

Cow::Cow(const Cow & c)
{
    int strlength = strlen(c.hobby+1);
    hobby = new char[strlength];
    strcpy( name, c.name );
    strcpy( hobby, c.hobby );
    weight = c.weight;
}

Cow::~Cow()
{
    delete[] hobby;
    std::cout << "free" << std::endl;
}

Cow & Cow::operator=( const Cow & c )
{
    strcpy(name,c.name);
    if ( hobby == nullptr )
    {
        hobby = new char[strlen(c.hobby)+1];
        strcpy(hobby, c.hobby);
    }
    weight = c.weight;
    return *this;
}

void Cow::ShowCow() const
{
    std::cout << name << std::endl;
    std::cout << hobby << std::endl;
    std::cout << "weight:" << weight << std::endl;
}