#ifndef _CHAPTER_14_4_H_
#define _CHAPTER_14_4_h_

#include <iostream>
class Person
{
    private:
      std::string lastname;
      std::string firstname;
    public:
      virtual void Show() = 0;
      Person( char* fn = nullptr, char* ln = nullptr );
};

class Gunsliner : public Person
{
    private:
      int tracenumber;
      double time;
    public:
      Gunsliner( char* fn = nullptr, char* ln = nullptr, int tn = 0 );
      virtual void Show();
      double Draw();
};

class PokerPlayer : public Person
{
    private:
      int cardvalue;
    public:
      PokerPlayer( char* fn = nullptr, char* ln = nullptr, int cv = 0 );
      int Draw();
      virtual void Show();
}

class BadDude : public Gunsliner, public PokerPlayer
{
    private:

    public:
      Bad
      double Gdraw();
      int Cdraw();
}

#endif