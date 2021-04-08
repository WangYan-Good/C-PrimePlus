#ifndef _QUEUE_H_
#define _QUEUE_H_

class Customer
{
private:
    long arrive;
    int  processtime;
public:
    Customer(long arr = 0, int pro = 0) { arrive = arr; processtime = pro; }
    void set( long when );
    long when() const { return arrive; }
    int ptime() const { return processtime; }
};

typedef Customer Item;

class Queue
{
private:
    struct Node { Item item; struct Node* next; };
    enum { Q_SIZE = 10 };
    Node* front;
    Node* rear;
    int items;
    const int qsize;

    Queue(const Queue & q) : qsize(0) {}
    Queue & operator=(const Queue & q) { return *this; }
public:
    Queue(int qs = Q_SIZE);
    ~Queue();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue(const Item & item);
    bool dequeue(Item & item);
};
#endif