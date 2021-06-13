#include <iostream>
#include <cstdlib>
#include <ctime>

const int MTN_PER_HR = 60;

bool newcustomer( double x );

class Customer
{
  private:
    long arrive;
    int processtime;

  public:
    Customer() { arrive = processtime = 0; }
    void set( long when ) { processtime = rand() % 3 + 1; arrive = when; }
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};