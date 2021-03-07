#include <iostream>
using namespace std;
/*
编写一个程序，它每次读取一个单词，直到用户只输入q。然后，该程序指出有多少个单词以元音打头，有多少个单词以辅音打头，还有多少个单词不属于这两类。
为此，方法之一是，使用isalpha()来区分字母和其他字符打头的单词，然后对于通过了isalpha()测试的单词，使用if或switch语句来确定哪些以元音打头。该程序的运行情况如下：

Enter words (q to quit):

The 12 awesome oxen ambled

quietly across 15 meters of lawn. q

5 words beginning with vowels

4 words beginning consotants

2 others
*/
int main()
{
  string word;
  int vowel = 0;
  int consonant = 0;
  int other = 0;

  cout << "Enter words( q to quit ):"<<endl;
  cin >> word;
  while( word != "q" )
  {
    if ( word[0] == 'a' || word[0] == 'e' || word[0] == 'i' || word[0] == 'o' || word[0] == 'u' )
    {
      vowel++;
    } else if ( isalpha(word[0]) ) {
      consonant++;
    } else if ( !isalpha(word[0]) ) {
      other++;
    }
    cin >> word;
  }
  cout << vowel << " words beginning with vowels" << endl;
  cout << consonant << " words beginning consotants"<< endl;
  cout << other << " others" << endl;
  return 0;
}
