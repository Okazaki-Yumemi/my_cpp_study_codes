#ifndef RATIONAL_H
#define RATIONAL_H

struct rationalT
{
    int num,den;
};

rationalT CreateRational(int num,int den);

rationalT AddRational(const rationalT &r1,
    const rationalT &r2);

rationalT MultiplyRational(const rationalT &r1,
    const rationalT &r2);

double GetRational(const rationalT &r);

void PrintRational(const rationalT &r);


#endif