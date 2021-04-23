#include "1.h"
template <class T1, class T2>
void Pair<T1,T2>::set( const T1 & yr, const T2 & bot )
{
  a = yr;
  b = bot;
}

template <class T1, class T2>
int Pair<T1,T2>::Sum() const
{
  return b.sum();
}

template <class T1, class T2>
void Pair<T1,T2>::Show(int y) const
{
  for( int index = 0; index < y; index++ )
  {
    std::cout << "\t\t" << a[index] << "\t\t" << b[index] << std::endl;
  }
}

Wine::Wine( const char* l, int y, const int yr[], const int bot[] )
{
  winename = l;
  yrs = y;
  pair.set( ArrayInt(yr, yrs), ArrayInt(bot, yrs) );
}

Wine::Wine( char* l, int y )
{
  winename = l;
  yrs = y;
}

void Wine::GetBottles()
{
  ArrayInt yr(yrs), bot(yrs);
  std::cout << "Enter " << winename << " date for " << yrs << " year(s) " << std::endl;
  for( int i = 0; i < yrs; i++ )
  {
    std::cout << "Enter years:";
    std::cin >> yr[i];
    std::cout << "Enter bottles for that years:";
    std::cin >> bot[i];
  }
  pair.set( yr, bot );
}

std::string & Wine::Label()
{
  return winename;
}

int Wine::sum()
{
  return pair.Sum();
}

void Wine::Show() const
{
  std::cout << "Wine: " << winename << std::endl;
  std::cout << "\t\tYear\tBottoles\n";
  pair.Show(yrs);
}