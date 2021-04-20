#include"1.h"
#include<cstring>
#include<iostream>
Cd::Cd()
{
    performers[0] = '\0';
    label[0] = '\0';
    selections = 0;
    playtime = 0;
}

Cd::Cd(const Cd & d)
{
    strcpy( performers, d.performers );
    strcpy( label, d.label );
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
    strcpy( performers, s1 );
    strcpy( label, s2 );
    selections = n;
    playtime = x;
}

void Cd::Report() const
{
    std::cout << "Cd" << std::endl;
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selection: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

Cd & Cd::operator=( const Cd & d )
{
    strcpy(performers, d.performers);
    strcpy( label, d.label );
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Cd::~Cd()
{

}

Classic::Classic():Cd()
{
    mainworks[0] = '\0';
}

Classic::Classic( const char* s0, const Cd & d):Cd(d)
{
    strcpy( mainworks, s0 );
}

Classic::Classic( const char* s0, const char* s1, const char* s2, int n, double x )
{
    strcpy(mainworks,s0);
    Cd(s1,s2,n,x);
}

void Classic::Report() const
{
    Cd::Report();
    std::cout << "Classic" << std::endl;
    std::cout << "mainworks: " << mainworks << std::endl;
}

Classic & Classic::operator=( const Classic & classic )
{
    if (this == nullptr) return *this;
    Cd::operator=(classic);
    strcpy(mainworks, classic.mainworks);
    return *this;
}

Classic::~Classic()
{

}