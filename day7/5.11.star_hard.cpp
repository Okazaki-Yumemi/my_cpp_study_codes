#include <iostream>
using namespace std;

void printChar(char c)
{
    cout<< c;
}

void printInt(long long n)
{
    if (n==0) return;
    if (n/10>0)
    {
        printInt(n/10);
    }
    printChar(n%10+'0');
}

void print(double d)
{
    if (d<0)
    {
        printChar('-');
        d=-d;
    }
    if (d==0)
    {
        printChar('0');
        printChar('.');
        for (int i=0; i<8;++i) printChar('0');
        return ;
    }
    if (d>1e8)
    {
        int exponent=0;

        while (d>=10)
        {
            d/=10;
            exponent++;
        }

        int intPart = (int)d;
        printChar(intPart+'0');
        printChar('.');

        d-=intPart;

        for (int i =0; i<8; ++i)
        {
            d*=10;
            int digit=(int)d;
            printChar(digit+'0');
            d-=digit;
        }

        printChar('e');
        printInt(exponent);
    }else
    {
        long long intPart = (long long )d;
        if (intPart ==0) printChar('0');
        else printInt(intPart);

        printChar('.');

        d-= intPart;

        for (int i=0; i<8 ; ++i)
        {
            d*=10;
            int digit =(int)d;
            printChar(digit+'0');
            d -=digit;
        }
    }
}

int main() {
    cout << "Test 1 (Normal): ";
    print(123.4567890123); 
    cout << endl;

    cout << "Test 2 (Big):    ";
    print(12345678900.0);
    cout << endl;
    
    return 0;
}