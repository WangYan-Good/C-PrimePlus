#ifndef _DMA_H_
#define _DMA_H_

class ABC
{
private:
    /* data */
public:
    ABC(/* args */);
    ~ABC();
    virtual void View() = 0;
};

class baseDMA : public ABC
{
private:
    /* data */
public:
    baseDMA(/* args */);
    ~baseDMA();
    virtual void View();
};

class lacksDMA : public baseDMA
{
private:
    /* data */
public:
    lacksDMA(/* args */);
    ~lacksDMA();
};

class hasDMA : public baseDMA
{
private:
    /* data */
public:
    hasDMA
(/* args */);
    ~hasDMA
();
};

hasDMA::hasDMA(/* args */)
{
}

hasDMA::~hasDMA()
{
}


#endif