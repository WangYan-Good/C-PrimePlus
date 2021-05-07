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
};

class Gunsliner : public Person
{
    private:
      int tracenumber;
    public:
      double Draw();
};

class PokerPlayer : public Person
{
    private:
      
    public:
      int Draw();
}

class BadDude : public Gunsliner, public PokerPlayer
{
    private:

    public:
      double Gdraw();
      int Cdraw();
}

#endif