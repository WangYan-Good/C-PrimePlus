#include "2.h"

template <typename T1, typename T2>
void Pair<T1, T2>::set( const T1 & yr, const T2 & bot )
{
  a = yr;
  b = bot;
}

template <typename T1, typename T2>
int Pair<T1,T2>::Sum() const
{
  return b.sum();
}

template <typename T1, typename T2>
void Pair<T1,T2>::Show(int y) const
{
  for( int index = 0; index < y; index++ )
  {
    std::cout << "\t\t" << a[index] << "\t\t" << b[index] <<  std::endl;
  }
} 

Wine::Wine( const char* l, int y, const int yr[], const int bot[] ):std::string(l),yrs(y),PairArray( ArrayInt(yrs,y), ArrayInt(bot,y) )
{
}

Wine::Wine( char* l, int y ) : std::string(l),yrs(y)
{
}

void Wine::GetBottles()
{
  ArrayInt yr(yrs), bot(yrs);
  std::cout << "Enter " << (std::string &)*this << " date for " << yrs << " year(s) " << std::endl;
  for( int i = 0; i < yrs; i++ )
  {
    std::cout << "Enter years: ";
    std::cin >> yr[i];
    std::cout << "Enter bottles for that years: ";
    std::cin >> bot[i];
  }
  PairArray::set(yr,bot);
}

std::string & Wine::Label()
{
  return (std::string &)(*this);
}

int Wine::sum()
{
  return PairArray::Sum();
}

void Wine::Show() const
{
  std::cout << "Wine: " << winename << std::endl;
  std::cout << "\t\tYear\tBottles\n";
  PairArray::Show(yrs);
}

// Wine & Wine::operator=( const Wine & wine )
// {

// }

// std::ostream & operator<<( std::ostream & os, const Wine & wine )
// {
    
// }