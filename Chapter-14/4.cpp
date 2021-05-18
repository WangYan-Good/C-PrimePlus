#include "4.h"
#include <cstring>
Person::Person( const char* fn, const char* ln )
{
    if( firstname != nullptr ) delete [] firstname;
    firstname = new char[strlen(fn)+1];
    strcpy_s( firstname, strlen(fn)+1, fn );

    if( lastname != nullptr ) delete [] lastname;
    lastname = new char[strlen(ln)+1];
    strcpy_s( lastname, strlen(ln)+1, ln );
}

void Person::Show() 
{
    std::cout << "First name: " << firstname << std::endl;
    std::cout << "Last name: " << lastname << std::endl; 
}

Person::~Person()
{
    delete [] firstname;
    delete [] lastname;
    std::cout << "Person has been deleted" << std::endl;
}

Gunsliner::Gunsliner( const char* fn, const char* ln, int tn, double t ):Person( fn, ln )
{
    tracenumber = tn;
    time = t;
}

 void Gunsliner::Show() 
{
    std::cout << "Gunsliner Show:" << std::endl;
    Person::Show();
    std::cout << "Trance number: " << tracenumber << std::endl;
    std::cout << "Time: " << time << std::endl;
}

double Gunsliner::Draw()
{
    return time;
}

Gunsliner::~Gunsliner()
{
    std::cout << "Gunsliner has been deleted" << std::endl;
}

PokerPlayer::PokerPlayer( const char* fn, const char* ln, int cv ):Person(fn, ln)
{
    cardvalue = cv;
}

int PokerPlayer::Draw()
{
    return cardvalue;
}

void PokerPlayer::Show() 
{
    std::cout << "PokerPlayer:" << std::endl;
    Person::Show();
    std::cout << "Card Value:" << std::endl;
}

PokerPlayer::~PokerPlayer()
{
    std::cout << "PokerPlayer has been deleted" << std::endl;
}

BadDude::BadDude( const char* fn, const char* ln, int tn, double t, int cv ):Gunsliner(fn, ln, tn, t), PokerPlayer( fn, ln, cv )
{

}

double BadDude::Gdraw()
{
    return Gunsliner::Draw();
}

int BadDude::Cdraw()
{
    return PokerPlayer::Draw();
}

void BadDude::Show()
{
    std::cout << "BadDude: " << std::endl;
    Gunsliner::Show();
    std::cout << " PokerPlayer::cardvalue " << PokerPlayer::Draw() << std::endl;
}

BadDude::~BadDude()
{
    std::cout << "BadDude has been deleted" << std::endl;
}