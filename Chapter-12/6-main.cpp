#include"6.h"
#include<iostream>
#include<ctime>
/*
Heather银行想知道，如果再开设一台ATM，情况将如何。
请对模拟进行修改，以包含两个队列。假设当第一台ATM前的排队人数少于第二台ATM时，客户将排在第一队，否则将排在第二队。
然后再找出要使平均等候时间为1分钟，每小时到达的客户数应该为多少
（注意，这是一个非线性问题，即将ATM数量加倍，并不能保证每小时处理的客户数量也翻倍，并确保客户等候的时间少于1分钟）？
*/
const int MIN_PER_HR = 60;
bool newcustomer( double x )
{
    return (std::rand() * x/RAND_MAX < 1);
}
int main()
{
    //Initial queue size
    int queue_size;
    std::srand(std::time(0));
    std::cout << "Case Study: Heather of Bank Automation Teller" << std::endl;
    std::cout << "Enter max size of queue:";
    std::cin >> queue_size;

    //Initial test time
    int hours;
    std::cout << "Enter test hours:";
    std::cin >> hours;

    Queue Atm1(queue_size);
    Queue Atm2(queue_size);

    long cyclelimit = MIN_PER_HR * hours;

    double perhour = 1;
    double min_per_cust;
    
    Item temp;

    long turnways  = 0;
    long customers = 0;
    long served    = 0;
    long sum_Atm  = 0;
    int  Atm1_wait_time = 0;
    int  Atm2_wait_time = 0;
    long line_wait = 0;
    double avetime = 0;

    while( perhour++ && avetime <= 1 )
    {
        //clean Atm1
        while( !Atm1.isempty() )
        {
            Atm1.dequeue(temp);
        }

        //clean Atm2
        while( !Atm2.isempty() )
        {
            Atm2.dequeue(temp);
        }

        //time served signal customer
        min_per_cust = MIN_PER_HR/perhour;

        for( int cycle = 0; cycle < cyclelimit; cycle++ )
        {
            if( newcustomer(min_per_cust) )
            {
                if( Atm1.isfull() && Atm2.isfull() )
                {
                    turnways++;
                } else {
                    //number of customers++
                    customers++;
                    //Init customer info
                    temp.set(cycle);
                    //Add customer into ATM
                    if(Atm1.queuecount() < Atm2.queuecount())
                    {
                        Atm1.enqueue(temp);
                    } else {
                        Atm2.enqueue(temp);
                    }
                }
            }

            //Atm1 serving
            if( Atm1_wait_time <= 0 && !Atm1.isempty() )
            {
                Atm1.dequeue(temp);
                Atm1_wait_time = temp.ptime();
                line_wait += cycle-temp.when();
                served++;
            }
            if( Atm1_wait_time > 0 ) Atm1_wait_time--;

            //Atm2 serving
            if( Atm2_wait_time <= 0 && !Atm2.isempty() )
            {
                Atm2.dequeue(temp);
                Atm2_wait_time = temp.ptime();
                line_wait += cycle - temp.when();
                served++;
            }
            if ( Atm2_wait_time > 0 ) Atm2_wait_time--;

            sum_Atm += Atm1.queuecount();
            sum_Atm += Atm2.queuecount();
        }
        if(customers > 0)
        {
            std::cout << "customers accepted: " << customers << std::endl;
            std::cout << " coustomers served: " << served << std::endl;
            std::cout << "          turnways: " << turnways << std::endl;
            std::cout << "average queue size: ";
            std::cout.precision(2);
            std::cout.setf(std::ios_base::fixed, std::ios_base::floatfield);
            std::cout << (double)sum_Atm/cyclelimit << std::endl;
            std::cout << " average wait time: " << (double)line_wait/served << " minutes" << std::endl;
        } else {
            std::cout << "No customers!" << std::endl;
        }
        avetime = (double)line_wait/served;
    }
}
