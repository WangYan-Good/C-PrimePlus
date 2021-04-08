#include"6.h"
#include<iostream>
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when;
}

Queue::Queue( int qs ) : qsize(qs)
{
    front = rear = nullptr;
    items = 0;
}

Queue::~Queue()
{
    Node* Temp;
    while( front != nullptr )
    {
        Temp = front;
        front = front->next;
        delete Temp;
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

bool Queue::enqueue( const Item & item )
{
    // std::cout << "Item arrive:" << item.when() << std::endl;
    // std::cout << "Item processor:" << item.ptime() << std::endl;
    if(isfull()) return false;
    Node* add = new Node;

    add->item = item;
    add->next = nullptr;

    if(front == nullptr) front = add;
    else rear->next = add;

    rear = add;
    items++;
    return true;
}

bool Queue::dequeue(Item & item)
{
    if(isempty()) return false;
    item = front->item;
    items--;

    Node* Temp = front;
    front = front->next;

    delete Temp;
    if (items==0) rear = nullptr;
    return true;
}