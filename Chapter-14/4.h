#ifndef _CHAPTER_14_4_H_
#define _CHAPTER_14_4_H_

#include <iostream>
class Person
{
    private:
      char* lastname;
      char* firstname;
    public:
      virtual void Show();
      Person( const char* fn = nullptr, const char* ln = nullptr );
      ~Person();
};

class Gunsliner : public Person
{
    private:
      int tracenumber;
      double time;
    public:
      Gunsliner( const char* fn = nullptr, const char* ln = nullptr, int tn = 0, double t = 0 );
      virtual void Show() ;
      double Draw();
      ~Gunsliner();
};

class PokerPlayer : public Person
{
    private:
      int cardvalue;
    public:
      PokerPlayer( const char* fn = nullptr, const char* ln = nullptr, int cv = 0 );
      int Draw();
      virtual void Show() ;
      ~PokerPlayer();
};

class BadDude : public Gunsliner, public PokerPlayer
{
    private:

    public:
      BadDude( const char* fn = nullptr, const char* ln = nullptr, int tn = 0, double t = 0, int cv = 0 );
      double Gdraw();
      int Cdraw();
      virtual void Show() ;
      ~BadDude();
};

#endif