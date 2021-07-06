#ifndef _CHAPTER_14_3_H_
#define _CHAPTER_14_3_H_
template<typename Q>  //Q type
class QueueTp
{
  private:
    typedef struct Node
    {
      Q item;
      struct Node* next;
    } Node;
    enum { Q_SIZE = 10 };
    Node* front;
    Node* rear;
    int itemnum;
    const int qsize;
    QueueTp( const QueueTp & q ) : qsize(0) {}
    QueueTp & operator=( const QueueTp & q ) { return *this; };
  public:
    QueueTp( int qs = Q_SIZE );
    ~QueueTp();
    bool isempty() const;
    bool isfull() const;
    int queuecount() const;
    bool enqueue( const Q & im );
    bool dequeue( Q & im );
    
};

class Worker
{
  private:
    char* name;
    long id;
  public:
    Worker( const char* n = nullptr, long i = 0L );
    virtual void Set( const char* n );
    virtual void Show() const;
    ~Worker();
};
#endif