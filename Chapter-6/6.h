#include <iostream>
using namespace std;

struct donateman{
    string names;
    double acount;
};

struct GrandPatrons{
    donateman donate;
    GrandPatrons* next;
};

struct Patrons{
    donateman donate;
    Patrons* next;
};

void InitDona( donateman* dona )
{
    cout << "Enter name:";
    cin >> dona->names;
    cout << "Enter count:";
    cin >> dona->acount;
}

void PrintPatrons( Patrons* pat )
{
    Patrons* p = pat;
    while( p != nullptr )
    {
        cout << p->donate->names << endl;
        p = p->next;
    }
}

void PrintGrandPatrons( GrandPatrons* GraPat )
{
    GrandPatrons* p = GraPat;
    while( p != nullptr )
    {
        cout << p->donate->names << endl;
        p = p->next;
    }
}
