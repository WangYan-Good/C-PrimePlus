#include "7.h"
#include <algorithm>

std::vector <int> lotto( int point_count, int choose_num )
{
    std::vector <int> tickets;
    for( int index = 0 ; index < point_count; index++ )
    {
        tickets.push_back(index);
    }
    random_shuffle( tickets.begin(), tickets.end());
    
    std::vector <int> choose( choose_num );
    for( int index = 0; index < choose_num; index++ )
    {
        choose[index] = tickets[index];
    }
    std::sort( choose.begin(), choose.end() );
    return choose;
}

void Show( int element )
{
    std::cout << element << " ";
}