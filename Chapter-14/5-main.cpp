/*
下面是一些类声明：
// emp.h -- header file for abstr_emp class and children

#include <iostream>
#include <string>
class abstr_emp
{
  private：
    std::string fname； // abstr__emp's first name
    std::string lname； // abstr_emp's last name
    scd::string job;    
  public：
    abstr_emp()；
    abscr_emp(const scd::scring & fn, const std::string & In,
    const std::string & j)；
    virtual void ShowAll() const; // labels and shows all data
    virtual void SetAll(); // prompts user for values
    friend std::ostream & operator<< (std::ostream & os, const abstr_emp & e )；
    // just displays first and last name
    virtual ~abstr_emp() = 0; // virtual base class
};

class employee ： public abstr_emp
{
  public：
    employee()；
    employee(const std：：string & fn, const std：：string & In,
            const std：：string & j);
    virtual void ShowAll() const；
    virtual void SetAll()；
};

class manager： virtual public abstr_emp
{
  private：
    int inchargeof； // number of abstr_emps managed
  protected：
    int InChargeOf() const { return inchargeof； } // output
    int & InChargeOf()( return inchargeof； } // input
  public：
    manager()；
    manager(const std：：string & fn, const scd：：string & In,
    const std：：string & j , int ico = 0 )；
    manager(const abstr_erap & e, int ico)；
    manager(const manager & m )；
    virtual void ShowAll() const；
    virtual void SetAll()；
};

class fink： virtual public abstr emp
{
  private:
    std::string reportsto;      //to whom fink reports
  protected:
    const std::string ReportsTo() const { return reportsto; };
    std::string & ReportsTo() { return reportsto; };
  public:
    fink();
    fink( const std::string & fn, const std::string & ln, const std::string & j, const std::string & rpo );
    fink( const abstr_emp & e, const std::string & rpo );
    fink( const fink & e );
    virtual void ShowAll() const;
    virtual void SetAll();
};

class highfink： public:manager, public fink // management fink
{
  publicr:
    highfink();
    highfink (const std::string & fn , const std::string & ln,
              const std::string & j, const std::string & rpo, int ico);
    highfink (const abstr_emp & e, const std::string & rpo, int ico);
    highfink (const；fink & ff：inf；ico);
    highfink (const manager & m, const std::string & rpo);.
    highfink (const highfink & h)；
    virtual void ShowAll() const；
    virtual void SetAll()；
};

注意, 该 类 层 次 结 构 使 带 虚 基 类 的 MI ，所以要； 记这种情況下用于构造函数.初始化列表的特殊规则。还 需 要 注意的晕，有些方法被声明为保护的。 
这 可 以 简化一些 highfmk 方法 的 代 码 （ 例 如 ，如果h i g h f m l c:: S h o w A l l ( )只是调用fink :: S h o w A l l ( )和 m a n a g e r :: S h 0 w A l l ( )，则它将调用. absti_emp ::ShowAll()两
次）。请提供类方法的实现,:并在一个程序中对这些类进行测试。下面是一个 小 型 测 试 程序

// pe-14-5 cpp
// useempl.cpp -- using the abstr_emp classes
#include <iostream>
using namespace std;
#include "emp.h"

int main(void)
{
    employee em (" Trip ", "Harrrs", "Thumper");
    cout << em << endl;
    em.ShowAll ()；
    manager ma("Amorphia", "Spindragon", "Nuancer", 5);
    cout << ma << endl;
    ma.ShowAll ();

    fink fi("Mat" , "Oggs*, "Oiler", "Juno Barr");
    cout << fi << endl；
    fi.ShowAll();
    highfink hf(ma, "Curly Kew")； // recruitment?
    hf.ShowAll();
    cout << "Press a key for next phase：\n"；
    cin.get()；
    highfink hf2；
    hf2.SetAll();
    cout << "Using an abstremp * pointer：\n"；
    abstr_emp * tri[4] = {&em, &fi, &hf, &hf2}；
    for (int i = 0； i < 4 ； i++)
        tri[i]->ShowAll()；
    return 0;
}

为什么没有定义陚值运算符？
为 什 么 要 将 S h o w A l l < > 和 S e t A l l < >定义为虚的？
为什么 要 将 a b s t r _ e m p 定义为虚基类？
为 什 么 h i g h f i n k 没有数据部分？
为什么只需要一个 o p e r a t o r < < ( )版本？
如果使用下面的代码替换程序的结M 部分，将会发生什么情况？
abstr_emp tri[4] = {em, fi, hf, hf2}；
for {int i = 0 ； i < 4 ； i++)
    tri[i].ShowAll();
*/