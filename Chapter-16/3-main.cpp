/*
修改程序清单16.3，使之从文件中读取单词。
一种方案是，使用vector<string>对象而不是string数组。
这样便可以使用push_back()将数据文件中的单词复制到vector<string>对象中，并使用size()来确定单词列表的长度。
由于程序应该每次从文件中读取一个单词，因此应使用运算符>>而不是getline()。
文件中包含的单词应该用空格、制表符或换行符分隔。
*/
#include "3.h"
using namespace std;
int main()
{
  fstream fout;
  fout.open("string.txt");
  
}