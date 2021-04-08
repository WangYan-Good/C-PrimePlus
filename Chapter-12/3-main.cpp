/*
新编写程序清单10.7和程序清单10.8描述的Stock类，使之使用动态内存分配的内存，而不是string类对象来存储股票名称。
另外，使用重载的operator<<()定义代替show()成员函数。再使用程序清单10.9测试新的定义程序。
class Stock
{
private:
    char* company;
    int shares;
    double share_val;
    double total_val;
    void set_tot() { total_val = shares * share_val; }
public:
    Stock();
    Stock(const char* co, long n = 0, double pr = 0.0);
    ~Stock();
    void buy(long num, double price);
    void sell(long num, double price);
    void update(double price);
    void show() const;
    const Stock & topval(const Stock & s) const;
};
*/
#include"3.h"
int main()
{
    Stock stock1("ByoSoft", 1000, 58);
    Stock stock2("Intel", 20000, 678.56);

    stock1.show();
    stock2.show();

    stock1.buy(200, 78);
    stock2.sell(4000, 576.90);
    
    stock1.show();
    stock2.show();

    return 0;
}