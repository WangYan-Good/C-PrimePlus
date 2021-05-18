/*
定义一个QueueTp模板。
然后在一个类似于程序清单14->12的程序中创建一个指向Worker的指针队列（参见程序清单14->10中的定义），并使用该队列来测试它。
*/
// Queue->cpp -- check the functions and xlasses

#include <iostream>
#include <string>
#include "3.h"
using namespace std;
 
int main()
{
    QueueTp <Worker> *Qworker = new QueueTp<Worker>(20); //= new QueueTP<Worker>(20);
    Worker w1("Leonardo", 1024);
    Worker w2("Elma", 2035);
    if (Qworker->isempty())
    {
        cout << "Qworker is empty!\n";
    }
    Qworker->enqueue(w1);
    Qworker->enqueue(w2);
    cout << "Qworker count: " << Qworker->queuecount() << endl;
    Worker w3("hello", 2);
    Qworker->enqueue(w3);
    Qworker->enqueue(w2);
    cout << "Qworker count: " << Qworker->queuecount() << endl;
    Worker temp;
    Qworker->dequeue(temp);
    cout << "Dequeue: " << endl;
    temp.Show();
    Qworker->dequeue(temp);
    cout << "Dequeue: " << endl;
    temp.Show();
    cout << "Qworker count: " << Qworker->queuecount() << endl;
    system("pause");
    return 0;
}
 