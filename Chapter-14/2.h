#ifndef _CHAPTER_14_2_H_
#define _CHAPTER_14_2_H_

#include <iostream>
#include <cstring>
#include <valarray>
#include <ostream>

//template class
template <typename T1, typename T2>
class Pair
{
  private:
    T1 a;
    T2 b;
  public:
    Pair( const T1 & yr, const T2 & bot ):a(yr),b(bot){}
    void set( const T1 & yr, const T2 & bot );
    Pair(){};
    int Sum() const;
    void Show(int y) const;
};

typedef std::valarray<int> ArrayInt;
typedef Pair<ArrayInt, ArrayInt> PairArray;

class Wine : private std::string, private PairArray
{
  private:
    std::string winename;
    int yrs;
  public:
    Wine( const char* l, int y, const int yr[], const int bot[] );
    Wine( char* l, int y );
    void GetBottles();
    std::string & Label();
    int sum();
    void Show() const;
    // Wine & operator=( const Wine & wine);
    // friend std::ostream & operator<<( std::ostream & os, const Wine & wine );
};

#endif