#ifndef _CHAPTER_16_10_H_
#define _CHAPTER_16_10_H_

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review
{
    std::string title;
    int rating;
    double price;
};

bool operator<( const Review & r1, const Review & r2 );
bool worsethan( const Review & r1, const Review & r2 );
bool FillReview( Review & rr );
void ShowReview( const Review & rr );

#endif