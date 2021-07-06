#ifndef _CHAPTER_17_7_H_
#define _CHAPTER_17_7_H_

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

void ShowStr( std::string str );
void Store( std::string str, std::ofstream & fout);
void Getstrs( std::ifstream & fin, std::vector<std::string> & vostr );

#endif