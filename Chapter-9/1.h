//golg.h --for pe9-1.cpp

const int Len = 40;
struct golf
{
  char fullname[Len];
  int handicap;
};

//non-interactive verison
//function sets golf strucure to provided name, handicap
//using value passed as arguments to the function
void setgolf( golf & g, const char * name, int hc );

//interactive version
//function solicits name and handicap form user
//and sets the members of g to the value entered
//returns 1 if name is entered, 0 if name is empty string
int setgolf(golf & g);
//function resets handicap to new value
void handicap(golf & g, int hc);

//function display contents of golf structure
void showgolf(const golf & g);
