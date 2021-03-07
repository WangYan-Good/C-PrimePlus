#include <iostream>
using namespace std;
//
//donate persion
//
struct donateman{
    string name;
    double acount;
};
//
//Grand Patrons
//
struct GrandPatrons{
    donateman* donate;
    GrandPatrons* next;
};
//
//Patrons
//
struct Patrons{
    donateman* donate;
    Patrons* next;
};

/*
  Add the new node into the last of GrandPatrons list
*/
void AddGrandNode( GrandPatrons* head, GrandPatrons* node )
{
  GrandPatrons* temp = head;
  while( temp->next != NULL )
  {
    temp = temp->next;
  }
  temp->next = node;
}

/*
  Add the new node into the last of Patrons list
*/
void AddPatNode( Patrons* head, Patrons* node )
{
  Patrons* temp = head;
  while( temp->next != NULL )
  {
    temp = temp->next;
  }
  temp->next = node;
}

/*
  Initialization donate person
*/
void InitDona( donateman* dm , GrandPatrons* gphead, Patrons* pahead)
{//
  //dm is the address of one of the donateman array
  //gp is the head point of Grand Patrons list
  //pa is the head point of Patrons list
  //
    GrandPatrons* gp = gphead;
    Patrons*          pa = pahead;
    cout << "Enter name:";
    cin >> dm->name;
    cout << "Enter count:";
    cin >> dm->acount;
    if ( dm->acount >= 10000 )
    {
      //
      //add dm into Grand Patron
      //
      gp = new GrandPatrons;
      gp->donate = dm;
      gp->next = NULL;

      AddGrandNode( gphead, gp );
    } else if ( dm->acount < 10000 ) {
      //
      //add dm into Patrons
      //
      pa = new Patrons;
      pa->donate = dm;
      pa->next = NULL;

      AddPatNode( pahead, pa );
    }
}
//
//show all of patrons
//
void PrintPatrons( Patrons* head )
{
    Patrons* p = head->next;
    while( p != nullptr )
    {
        cout << p->donate->name << endl;
        p = p->next;
    }
}
//
//show all of grand patrons
//
void PrintGrandPatrons( GrandPatrons* head )
{
    GrandPatrons* p = head->next;
    while( p != nullptr )
    {
        cout << p->donate->name << endl;
        p = p->next;
    }
}
