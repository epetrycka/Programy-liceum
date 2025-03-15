#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

fstream a, b;
int t[10000], y[10000];

przyp()
{
    for(int i=1; i<10000; i++)
    {
        t[i]=1;
    }
}

pierw()
{
    for(int i=2; i<10000; i=i+2)
    {
        y[i]=1;
    }
    int k=3, i, s;
    while(k<10000)
    {
        i=2;
        s=i*k;
        while(s<10000)
        {
            y[s]=1;
            i++;
            s=i*k;
        }
        k=k+2;
    }
}

szcz()
{
    int p=2, k, f;
    for(int i=2; i<10000; i=i+2)
    {
        t[i]=0;
    }
    while(p<10000)
    {
        if (t[p]==1)
        {
            f=1;
            k=p;
            while(f<10000)
            {
                if(t[f]==1)
                {
                    k--;
                    if(k==0)
                    {
                        t[f]=0;
                        k=p;
                    }
                }
                f++;
            }
        }
        p++;
    }
}

zad1()
{
    int w=0, s, x=0;
    while(!a.eof())
    {
        a >> s;
        if(t[s]==1)
        {
            w++;
        }
        if(t[s]==1 && y[s]==0)
        {
            x++;
        }
    }
    b << "Wyniki: " << endl << "zad1.1: " << w;
    b << endl << "zad1.3: " << x;
}

zad2()
{
    int p[10000], i=0, s, c=0, maxc, z, maxz;
    while(!a.eof())
    {
        a >> s;
        p[i]=t[s];
        if(c==0)
        {
            z=s;
        }
        if(p[i]==1)
        {
            c++;
        }
        else
        {
            if(c>maxc)
            {
                maxc=c;
                maxz=z;
            }
            c=0;
        }
        i++;
    }
    b << endl << "zad1.2: " << maxc << ", " << maxz;
}

main()
{
    przyp();
    szcz();
    a.open("dane.txt", ios::in);
    b.open("odp1.txt", ios::out);
    pierw();
    zad1();
    a.close();
    a.open("dane.txt", ios::in);
    zad2();
}
