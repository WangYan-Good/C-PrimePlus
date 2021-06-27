#include "10.h"

bool operator<( const Review & r1, const Review & r2 )
{
    if( r1.price < r2.price )
    {
        return true;
    } else if( r1.price == r2.price && r1.rating < r2.rating ){
        return true;
    } else {
        return false;
    }
}

bool worsethan( const Review & r1, const Review & r2 )
{
    if( r1 < r2 )
    {
        return true;
    } else {
        return false;
    }
}

bool FillReview( Review & rr )
{
    std::cout << "Enter the book title:";
    std::getline( std::cin , rr.title );
    if( rr.title == "q" )
    {
        return false;
    }

    std::cout << "Enter the book price:";
    std::cin >> rr.price;

    std::cout << "Enter the book rating:";
    std::cin >> rr.rating;

    return true;
}

void ShowReview( const Review & rr )
{
    std::cout << rr.title << '\t' << rr.price << '\t' << rr.rating << std::endl;
}