#ifndef _CHAPTER_14_3_H_
#define _CHAPTER_14_3_H_
template<typename Q>
class QueueTp
{
  private:
    struct Node
    {
      Q Node;
      Q* next;
    };
    enum { Q_SIZE = 10 };
    Node* front;
    Node* rear;
    int item;
    const int qsize;
    QueueTp( const QueueTp & q ) : qsize(0) {}
    QueueTp & operator=( const QueueTp & q ) { return *this; };
  public:
    QueueTp( int qs = Q_SIZE );
    ~QueueTp();
    bool isempty() const;
    boot isfull() const;
    int queuecount() const;
    bool enqueue( const T & item );
    bool dequeue( T & item );
};
#endif