#ifndef _CHAPTER_14_1_H_
#define _CHAPTER_14_1_H_
#include <iostream>
#include <cstring>
#include <valarray>
// typedef Pair<ArrayInt,ArrayInt> PairArrray;
template <class T1, class T2>
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

class Wine
{
  private:
    std::string winename;
    PairArray pair;
    int yrs;
  public:
    Wine( const char* l, int y, const int yr[], const int bot[] );
    Wine( char* l, int y );
    void GetBottles();
    std::string & Label();
    int sum();
    void Show() const;
};
#endif