/*
4．程序清单15.16在每个try后面都使用两个 catch 块，以确保nbad_index异常导致方法label_val()被调用。
请修改该程序,在每个try块后面只使用一个catch 块,并使用RTTI来确保合适时调用label_val()。

*/
#include <iostream>
#include "4.h"

int main()
{
  using std::cout;
  using std::cin;
  using std::endl;

  double vals1[12] = 
  {
    1220, 1100, 1122, 2212, 1232, 2334,
    2884, 2393, 3302, 2922, 3002, 3544
  };

  double vals2[12] =
  {
    12, 11, 22, 21, 32, 34,
    28, 29, 33, 29, 32, 35
  };

  Sales sales1( 2011, vals1, 12 );
  LabeledSales sales2( "Blogstar", 2012, vals2, 12 );

  cout << "First try bolck:\n";

  Sales::bad_index *s;
  LabeledSales::nbad_index *l;
  try
  {
    int i;
    cout << "Year = " << sales1.Years() << endl;
    for( i = 0; i < 12; ++i )
    {
      cout << sales1[i] << ' ';
      if( i % 6 == 5 )
      {
        cout << endl;
      }
    }
    cout << "Year = " << sales2.Years() << endl;
    cout << "Label = " << sales2.Label() << endl;
    for( i = 0; i <= 12; ++i )
    {
      cout << sales2[i] << ' ';
      if( i % 6 == 5 )
      {
        cout << endl;
      }
    }
    cout << "End of try block l.\n";
  }
  catch( std::logic_error & bad )
  {
    cout << bad.what();
    if( l == dynamic_cast< LabeledSales::nbad_index * >(&bad) )
    {
      cout << "Company:" << l->label_val() << endl;
      cout << "bad index:" << l->bi_val() << endl;
    } else if( s == dynamic_cast< Sales::bad_index * >(&bad) )
    {
      cout << "bad index:" << s->bi_val() << endl;
    }
  }

  cout << "\nNext try block:\n";
  try
  {
    sales2[2] = 37.5;
    sales1[20] = 23345;
    cout << "End of try block 2.\n";
  }
  catch( std::logic_error & bad )
  {
    cout << bad.what() << endl;
    if( l == dynamic_cast< LabeledSales::nbad_index * >(&bad) )
    {
      cout << "Company:" << l->label_val() << endl;
      cout << "bad index:" << l->bi_val() << endl;
    } else if( s == dynamic_cast<Sales::bad_index *>(&bad) )
    {
      cout << "bad index:" << s->bi_val() << endl;
    }
  }
  cout << "done\n";
  return 0;
}