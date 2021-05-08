#include "4.h"

Person::Person( char* fn, char* ln )
{
    firstname.copy( fn, strlen(fn) );
    lastname.copy( ln, strlen(ln) );
}

void Person::Show()
{
    std::cout << "First name: " << firstname << std::endl;
    std::cout << "Last name: " << lastname << std::endl; 
}

Person::~Person()
{

}

Gunsliner::Gunsliner( char* fn, char* ln, int tn ):Person( fn, ln )
{
    tracenumber = tn;
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
    
}

PokerPlayer::PokerPlayer( char* fn, char* ln, int cv ):Person(fn, ln)
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

}