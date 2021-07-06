#ifndef _CD_H_
#define _CD_H_

class Cd
{//represents a CD disk
private:
    char* performers;
    char* label;
    int selections;
    double playtime;
public:
    Cd( const char* s1, const char* s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    virtual void Report() const;
    virtual Cd & operator=( const Cd & d );
};

class Classic:public Cd
{
private:
    char* mainworks;
public:
    Classic( const char* s0, const char* s1, const char* s2, int n, double x);
    Classic( const char* s0, const Cd & d);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    virtual Classic & operator=( const Classic & classic );
};

#endif