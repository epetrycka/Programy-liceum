#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;

fstream w;
int dzies(int x)
{
    int p=1, y=0;
    while(x>0)
    {
        y=y+(x%10)*p;
        p=p*2;
        x=x/10;
    }
    return y;
}

unsigned long long int bin(int x)
{
    long long int y=0, t[100], i=0;
    while(x>0)
    {
        t[i]=x%2;
        x=x/2;
        i++;
    }
    i--;
    while(i>=0)
    {
        y=y*10+t[i];
        i--;
    }
    return y;
}

main()
{
    unsigned long long int x=1, y, a, b, c, d, p=0, s=0;
    while (x<1000000)
    {
        a=x;
        y=0;
        d=0;
        while(a>0)
        {
            y=y*10+a%10;
            a=a/10;
        }
        b=bin(x);
        c=b;
        while(c>0)
        {
            d=d*10+c%10;
            c=c/10;
        }
        if (x==y && d==b)
        {
            cout << endl << x << ", " << b;
            s=s+x;
            p++;
        }
        x++;
    }
    cout << endl << "wynik:" <<  p << ", " << s;
    w.open("wyniki3_2.txt", ios::out);
    w << s;
}
