#include "1.h"
#include <string.h>

bool IsHuiWen( const std::string & str  )
{
  if( str.compare( "null" ) == 0 )
  {
    std::cout << "string is null" << std::endl;
    return false;
  }
  std::string copystr(str);
  reverse( copystr.begin(), copystr.end() );
  std::cout << copystr << std::endl;
  if( copystr != str )
  {
    return false;
  } else {
    return true;
  }
}

bool IsHuiWen( const char * str, int strlen  )
{
  const char * str_start = str;
  const char * str_end = &str[strlen-1];

  while( str_end >= str_start )
  {
    if( *str_start != *str_end )
    {
      return false;
    }
    str_start++;
    str_end--;
  }
  return true;
}
