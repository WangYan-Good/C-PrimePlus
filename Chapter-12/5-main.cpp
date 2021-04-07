#include"5.h"
#include<iostream>
#include<ctime>
/*
Heather银行进行的研究表明，ATM客户不希望排队时间不超过1分钟。
使用程序清单12.10中的模拟，找出要使平均等候时间为1分钟，每小时到达的客户数应为多少（试验时间不短于100小时）？
*/
const int MIN_PER_HR = 60;
bool newcustomer( double x )
{
    return (std::rand() * x/RAND_MAX < 1);
}

int main()
{
    int qsize;
    std::srand(std::time(0));
    std::cout << "Case Study: Heather of Bank Automation Teller" << std::endl;
    std::cout << "Enter max size of queue:";
    std::cin  >> qsize;

    Queue line(qsize);

    std::cout << "The simulation hours: 100" << std::endl;
    int hours = 100;

    long cyclelimit = MIN_PER_HR * hours;

    double perhour;
    double min_per_cust;
    perhour = 1;
    Item temp;
    long turnways = 0;
    long customers = 0;
    long served = 0;
    long sum_line = 0;
    int wait_time = 0;
    long line_wait = 0;
    double avertime = 0;

    while( perhour++ && avertime <= 1 )
    {
        while( !line.isempty() )
        {
            line.dequeue(temp);
        }
        //
        //the mintues for serving signal customer 
        //
        min_per_cust = MIN_PER_HR / perhour;

        for ( int cycle = 0; cycle < cyclelimit; cycle++ )
        {
            if( newcustomer(min_per_cust) )
            {
                if(line.isfull())                  // queue is full , customer turn ways 
                   turnways++;
               else
               {
                   customers++;                    //customer add
                   temp.set(cycle);                //set arrive time
                   line.enqueue(temp);             // add temp node into queue
               }
            }
            if(wait_time <= 0 && !line.isempty())
            {
                line.dequeue(temp);                //server current customer
                wait_time = temp.ptime();          //
                line_wait += cycle - temp.when();
                served++;
            }
            if( wait_time > 0 )
               wait_time--;
           sum_line += line.queuecount();
        }

        if(customers > 0)
        {
            std::cout << "customers accepted: " << customers << std::endl;
            std::cout << " coustomers served: " << served << std::endl;
            std::cout << "          turnways: " << turnways << std::endl;
            std::cout << "average queue size: ";
            std::cout.precision(2);
            std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
            std::cout << (double)sum_line/cyclelimit << std::endl;
            std::cout << " average wait time: " << (double)line_wait/served << " minutes" << std::endl;
        } else {
            std::cout << "No customers!" << std::endl;
        }
        avertime = (double)line_wait/served;
    }
    std::cout << "When there comes " << perhour << " people per hours, the average wait time will be about 1 minute." << std::endl;
    std::cout << "Done!" << std::endl;
    return 0;
}