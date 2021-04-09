#include"2.h"
#include<cstring>
#include<iostream>
Cd::Cd()
{
    performers = new char[1];
    performers[0] = '\0';

    label = new char[1];
    label[0] = '\0';

    selections = 0;
    playtime = 0;
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];
    strcpy( performers, d.performers );
    strcpy( label, d.label );
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd(const char* s1, const char* s2, int n, double x)
{
    performers = new char[strlen(s1)+1];
    label = new char[strlen(s2)+1];
    strcpy( performers, s1 );
    strcpy( label, s2 );
    selections = n;
    playtime = x;
}

void Cd::Report() const
{
    // std::cout << "Cd" << std::endl;
    std::cout << "performers: " << performers << std::endl;
    std::cout << "label: " << label << std::endl;
    std::cout << "selection: " << selections << std::endl;
    std::cout << "playtime: " << playtime << std::endl;
}

Cd & Cd::operator=( const Cd & d )
{
    delete[] performers;
    delete[] label;

    performers = new char[strlen(d.performers)+1];
    label = new char[strlen(d.label)+1];

    strcpy(performers, d.performers);
    strcpy( label, d.label );
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Cd::~Cd()
{
    delete[] performers;
    delete[] label;
}

Classic::Classic():Cd()
{
    mainworks = new char[1];
    mainworks[0] = '\0';
}

Classic::Classic( const char* s0, const Cd & d):Cd(d)
{
    mainworks = new char[strlen(s0)+1];
    strcpy( mainworks, s0 );
}

Classic::Classic( const char* s0, const char* s1, const char* s2, int n, double x )
{
    mainworks = new char[strlen(s0)+1];
    strcpy(mainworks,s0);
    Cd(s1,s2,n,x);
}

void Classic::Report() const
{
    // Cd::Report();
    std::cout << "Classic" << std::endl;
    std::cout << "mainworks: " << mainworks << std::endl;
}

Classic & Classic::operator=( const Classic & classic )
{
    if (this == nullptr) return *this;
    Cd::operator=(classic);

    delete[] mainworks;
    mainworks = new char[strlen(classic.mainworks)+1];
    strcpy(mainworks, classic.mainworks);
    return *this;
}

Classic::~Classic()
{
    delete[] mainworks;
}