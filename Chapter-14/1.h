#ifndef _CHAPTER_14_1_H_
#define _CHAPTER_14_1_H_
#include <iostream>
#include <cstring>
#include <valarray>
typedef std::valarray<int> ArrayInt;
// typedef Pair<ArrayInt,ArrayInt> PairArrray;
class Wine
{
  private:
    std::string winename;
    Pair pair;
  public:
    Wine();
};

class Pair
{
  private:
    std::valarray<int> ArrayIntYear;
    std::valarray<int> ArrayIntNumb;
  public:
    Pair();
};
#endif