/*
7．下面是某个程序的部分代码。

该程序将键盘输入读取到一个由 string对象组成的vector中，将字符串内容(而不是string对象）存储到一个文件中，
然后该文件的内容复制到另一个由 string对象组成的vector 中。

int main()
using namespace std;vectorestring> vostr;
string temp;
// acquire strings
cout <<"Enter strings (empty line to quit):while igetline lcin, temp) && temp [0] != 'lO')
vostr.push_back ( temp);
cout<< "Here is your input .ln" ;
for_each (vostr.begin (), vostr.end() . ShowStr);

// store in a file
ofstream fout( "strings.dat", ios_base: :out | ios_base: :binary);
for_each(vostr.begin() , vostr.end(),Store(fout));
fout.close ();
// recover file contents
vector<string> vistr;
ifstream fin("strings.dat", ios_base::in | ios_base::binary);
if ( !fin.is_open ())
{
  cerr << "Could not open file for input .in" ;
  exit(EXIT_FAILURE);
}
Getstrs(fin, vistr);
cout << "\nHere are the strings read from the file:ln" ;for_each(vistr.begin() , vistr.end( , ShowStr) ;
return 0;
}
该程序以二进制格式打开文件，并想使用read()和 write()来完成IO。
余下的工作如下所述。
编写函数void ShowStr(const string &)，它显示一个string对象，并在显示完后换行。
编写函数符Store，它将字符串信息写入到文件中。
Store 的构造函数应接受一个指定 ifstream对象的参数，而重载的 operator()(const string &)应指出要写入到文件中的字符串。
一种可行的计划是，首先将字符串的长度写入到文件中，然后将字符串的内容写入到文件中。例如，如果 len存储了字符串的长度，可以这样做:

os.write((char *) &len,sizeof(std::size_t)); 1/ store lengthos , writels.data() , len);
// store characters
成员函数data()返回一个指针，该指针指向一个其中存储了字符串中字符的数组。它类似于成员函数c_str()，只是后者在数组末尾加上了一个空字符。
编写函数GetStrs()，它根据文件恢复信息。该函数可以使用read( )来获得字符串的长度，然后使
用一个循环从文件中读取相应数量的字符，并将它们附加到一个原米为工的T时Sng 不不古于string 的数据是私有的，因此必须使用string类的万法来将数据仔储到String对象中，而不能直接存储。

*/
#include "7.h"
using namespace std;
int main()
{
    vector<string> vostr;
    string temp;
    // acquire strings
    cout <<"Enter strings (empty line to quit):";
    while (getline (cin, temp) && temp [0] != 'lO') vostr.push_back ( temp);
    cout<< "Here is your input .ln" ;
    for_each (vostr.begin (), vostr.end(), ShowStr);

    // store in a file
    ofstream fout( "strings.dat", ios_base::out | ios_base::binary);
    for_each(vostr.begin() , vostr.end(),Store(fout));
    fout.close ();
    // recover file contents
    vector<string> vistr;
    ifstream fin("strings.dat", ios_base::in | ios_base::binary);
    if ( !fin.is_open ())
    {
    cerr << "Could not open file for input .in" ;
    exit(EXIT_FAILURE);
    }
    Getstrs(fin, vistr);
    cout << "\nHere are the strings read from the file:ln" ;for_each(vistr.begin() , vistr.end( , ShowStr) ;
    return 0;
}