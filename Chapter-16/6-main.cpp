/*
使用STL queue模板类而不是第12章的Queue类，重新编写程序清单12.12所示的示例。
*/
#include "6.h"
#include <queue>

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::ios_base;

    std::srand( std::time(0) );

    cout << "Case Study: Bank of Heather Automatic Teller\n";
    cout << "Enter maximum size of queue: ";
    int qs;
    cin >> qs;

    std::queue<Customer> line;

    cout << "Enter the number of aimulation hours: ";
    int hours;
    cin >> hours;

    long cyclelimit = MTN_PER_HR * hours;

    cout << "Enter the average number of customers per hours: ";
    double perhour;
    cin >> perhour;
    double min_per_cust;
    min_per_cust = MTN_PER_HR;

    Customer temp;
    long turnaways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    long wait_time = 0;
    long line_wait = 0;

    for( int cycle = 0; cycle < cyclelimit; cycle++ )
    {
        if( newcustomer(min_per_cust) )
        {
            if( qs == line.size() )
            {
                turnaways++;
            } else {
                customers++;
                temp.set(cycle);
                line.push( temp );
            }
        }
        if( wait_time <= 0 && !line.empty() )
        {
            line.push( temp );
            wait_time = temp.ptime();
            line_wait += cycle - temp.when();
            served++;
        }
        if( wait_time > 0 )
        {
            wait_time--;
        }
        sum_line += line.size();
    }

    if( customers > 0 )
    {
        cout << "customers accepted: " << customers << endl;
        cout << "  customers served: " << served << endl;
        cout << "         turnaways: " << turnaways << endl;
        cout << "average queue size: ";
        cout.precision(2);
        cout.setf( ios_base::fixed, ios_base::floatfield );
        cout << (double) sum_line / cyclelimit << endl;
        cout << " average wait time: " << (double) line_wait / served << " minutes\n";
    } else {
        cout << "No customers!\n";
    }
    cout << "Done\n";

    return 0;
}