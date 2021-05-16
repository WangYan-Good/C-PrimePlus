#include "3.h"
#include <iostream>
#include <cstring>
template <typename Q>
QueueTp<Q>::QueueTp( int qs ) : qsize(qs)
{
    itemnum = 0;
    front = nullptr;
    rear = nullptr;    
}

template <typename Q>
bool QueueTp<Q>::isempty() const
{
    return (itemnum == 0);
}

template <typename Q>
bool QueueTp<Q>::isfull() const
{
    return ( itemnum == qsize );
}

template <typename Q>
int QueueTp<Q>::queuecount() const
{
    return itemnum;
}

template <typename Q>
bool QueueTp<Q>::enqueue( const Q & im ) 
{
    if( isfull() )
    {
        std::cout << "Queue has full" << std::endl;
        return false;
    }

    Node* newitem = new Node;
    newitem->item = im;
    newitem->next = nullptr;
    itemnum++;
    if( front == nullptr )
    {
        front = newitem;
    } else {
        rear->next = newitem;
    }
    rear = newitem;

    return true;
}

template <typename Q>
bool QueueTp<Q>::dequeue( Q & im ) 
{
    if( isempty() )
    {
        std::cout << "Queue is empty now" << std::endl;
        return false;
    } else {
        im = front->item;
        itemnum--;
        Node* temp = front;
        front = front->next;
        delete temp;

        if( itemnum == 0 )
        {
            rear = nullptr;
        }
    }
    return true;
}

template <typename Q>
QueueTp<Q>::~QueueTp()
{

}

Worker::Worker( const char* n, long i )
{
    if( name != nullptr )
    {
        delete [] name;
    }
    name = new char[ strlen(n)+1 ];
    strcpy_s( name, strlen(n), n );

    id = i;
}

void Worker::Set( const char* n )
{
    // std::string  strname;
    std::cout << "Enter name: ";
    // std::cin >> strname ;
    
    if( name != nullptr ) delete [] name;
    name = new char[ strlen(n) + 1 ];
    strcpy_s( name, strlen(n), n );

    // strcpy_s( name, strname.length(), strname );
    //getline(std::cin, name);

    std::cin.ignore();

    std::cout << "Enter id: ";
    std::cin >> id;
}

void Worker::Show() const
{
    std::cout << "name: " << name << std::endl;
    std::cout << "id: " << id << std::endl;
}

Worker::~Worker()
{
    
}