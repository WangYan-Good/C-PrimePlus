#include<iostream>
using namespace std;
/*
为复习题5描述的类提供方法定义，并编写一个小程序来演示所有的特性。
定义一个类来表示银行账户，数据成员包括储户姓名、账号(使用字符串)和存款。
成员函数执行如下操作：
创建一个对象并将其初始化
显示储户姓名、账号和存款
存入参数指定的存款
取出参数指定的款项
*/
class bankcount
{
  private:
    string name;
    string acount;
    double balance;
  public:
    bankcount( const string & na, const string & ac, const double & ble );
    void showInfo();
    void save( double addbalance );
    void draw( double subbalance );
};
bankcount::bankcount( const string & na, const string & ac, const double & ble )
{
  name = na;
  acount = ac;
  balance = ble;
}

void bankcount::showInfo()
{
  cout <<"name:"<< name << endl;
  cout << "scount:" << acount << endl;
  cout << "balance:" << balance << endl;
}

void bankcount::save( double addbalance )
{
  balance += addbalance;
}

void bankcount::draw( double subbalance )
{
  balance -= subbalance;
}

int main()
{
  bankcount bkat{ "wy", "135628", 645.26 };
  bkat.showInfo();
  cout << endl;
  bkat.save(800);
  bkat.showInfo();
  cout << endl;
  bkat.draw(500);
  bkat.showInfo();
  return 0;
}
