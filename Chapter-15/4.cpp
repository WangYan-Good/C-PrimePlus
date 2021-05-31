#include "4.h"
#include<iostream>
#include<exception>
Sales::bad_index::bad_index( int ix, const std::string & s ):std::logic_error(s),bi(ix)
{
  
}

Sales::Sales( int yy ):year(yy)
{
  for( int index = 0; index < MONTHS; index++ )
  {
    gross[index] = 0;
  }
}

Sales::Sales( int yy, const double * gr, int n )
{
  year = yy;
  int index;
  int lim = ( n < MONTHS )?n:MONTHS;
  for( index = 0; index < lim; index++ )
  {
    gross[index] = gr[index];
  }

  for( ; index < MONTHS; index )
  {
    gross[index] = 0;
  }
}

double Sales::operator[] (int i) const
{
  
}

double & Sales::operator[] ( int i )
{
  
}

LabeledSales::nbad_index::nbad_index( const std::string & lb, int ix, const std::string & s ):Sales::bad_index(ix,s)
{
  lbl = lb;
}

LabeledSales::LabeledSales( const std::string & lb, int yy ):Sales(yy)
{
  label = lb;
}

LabeledSales::LabeledSales( const std::string & lb, int yy, const double * gr, int n ):Sales(yy,gr,n)
{
  label = lb;
}

double LabeledSales::operator[] (int i) const
{
  
}

double & LabeledSales::operator[] (int i)
{
  
}