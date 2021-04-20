#include"4.h"
/*
typedef unsigned long Item;

class Stack
{
private:
    enum { MAX = 10 };
    Item * pitems;
    int size;
    int top;
public:
    Stack(int n = MAX);
    Stack(const Stack & st);
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item & item);
    bool pop(Item & item);
    Stack & operator=(const Stack & st);
};
*/
Stack::Stack( int n )
{
    size = n;
    pitems = new Item[n];
    for ( int index = 0; index < n; index++ )
    {
        pitems[index] = 0;
    }
    top = 0;
}

Stack::Stack(const Stack & st)
{
    pitems = new Item[st.size];
    size = st.size;
    top = st.top;
    for ( int i = 0; i < st.size; i++ )
    {
        pitems[i] = st.pitems[i];
    }
}

Stack::~Stack()
{
    delete [] pitems;
}

bool Stack::isempty() const
{
    return top == 0;
}

bool Stack::isfull() const
{
    return top == MAX;
}

bool Stack::push( const Item & item )
{
    if ( top < MAX )
    {
        pitems[top++] = item;
        return true;
    }
    return false;
}

bool Stack::pop(Item & item)
{
    if ( top > 0 )
    {
        item = pitems[--top];
        return true;
    }
    return false;
}

Stack & Stack::operator=(const Stack & st)
{
    if ( this == &st ) return *this;
    size = st.size;
    top = st.top;

    delete[] pitems;
    pitems = new Item[st.size];
    for ( int i = 0; i < st.size; i++ )
    {
        pitems[i] = st.pitems[i];
    }
    return *this;
}