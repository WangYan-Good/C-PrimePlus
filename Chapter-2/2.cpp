#include <iostream>
using namespace std;
/*
编写一个C++程序，它要求用户输入一个以long为单位的距离
然后将它转换为码(1 long = 220 码 )
*/
int main()
{
	int long_d;
	cout<<"Please input distance:(long)：";
	cin>>long_d;
	cout << long_d * 220 << endl;

	return 0;
}
