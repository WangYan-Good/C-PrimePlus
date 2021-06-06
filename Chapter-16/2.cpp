#include "2.h"

bool IsHuiWen( const std::string & str )
{
  std::string comparestr;
  std::string copystr(str);
  for( auto x = copystr.begin(); x != copystr.end(); )
  {
    if( !isalpha(*x) )
    {
      copystr.erase(x);
      continue;
    }
    if( isupper(*x) )
    {
      *x = tolower(*x);
    }
    x++;
    // std::cout << *x;
  }
  comparestr = copystr;
  reverse( copystr.begin(), copystr.end() );
  if( comparestr != copystr )
  {
    return false;
  } else {
    return true;
  }
}

bool IshuiWen( const char * cstr  )
{
  std::string str( cstr );
  std::string compare_str;
  for( auto x = str.begin(); x != str.end(); )
  {
    if( !isalpha(*x) )
    {
      str.erase(x);
      continue;
    }
    if( isupper(*x) )
    {
      *x = tolower(*x);
    }
    x++;
    // std::cout << *x;
  }
  compare_str = str;
  reverse( str.begin(), str.end() );
  if( compare_str != str )
  {
    return false;
  } else {
    return true;
  }
}