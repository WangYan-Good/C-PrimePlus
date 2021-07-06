/*
与编程练习1中给出的问题相同，但要考虑诸如大小写、空格和标点符号这样的复杂问题。
即“Madam, I'm Adam”将作为回文来测试。
例如，测试函数可能会将字符串缩略为“madamimadam”，然后测试倒过来是否一样。
不要忘了有用的cctype库，您可能从中找到几个有用的STL函数，尽管不一定非要使用它们。
*/
#include "2.h"

int main()
{
  std::string str;
  std::cout << "Enter string:";
  getline(std::cin, str);

  if( IsHuiWen(str) )
  {
    std::cout << "true" << std::endl;
  } else {
    std::cout << "false" << std::endl;
  }
  return 0;
}