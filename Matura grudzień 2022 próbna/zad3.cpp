#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int t[100], d[16]={0};
fstream a, b;

szes(int x)
{
    while(x>0)
    {
        d[x%16]++;
        x=x/16;
    }
}

bool pr(int x)
{
    int k=2;
    if(x==1)
    {
        return false;
    }
    while(k<=sqrt(x))
    {
        if (x%k==0)
        {
            return false;
        }
        k++;
    }
    return true;
}

int roz(int x)
{
    int k=2, r=0;
    while (k<=x/2)
    {
        if(pr(k)==true)
        {
            if(pr(x-k)==true)
            {
                r++;
            }
        }
        k++;
    }
    return r;
}

main()
{
    a.open("liczby.txt", ios::in);
    b.open("wyniki3.txt", ios::out);
    if (!a.good())
    {
        cout << "Brak pliku";
    }
    else
    {
        int i=0, lp=0, maxr=0, minr=1000000, mn, mx;
        while (!a.eof())
        {
            a >> t[i];
            if (pr(t[i]-1)==true)
            {
                lp++;
            }
            if (roz(t[i])>maxr)
            {
                maxr=roz(t[i]);
                mx=t[i];
            }
            if (roz(t[i])<minr)
            {
                minr=roz(t[i]);
                mn=t[i];
            }
            szes(t[i]);
            i++;
        }
        b << "zad3.2: " << lp << endl;
        b << "zad3.3: " << mx << ": " << maxr << " ; " << mn << ": " << minr << endl;
        b << "zad3.4: " << endl;
        int f=0;
        while(f<10)
        {
            b << f << ":" << d[f] << endl;
            f++;
        }
        while(f<16)
        {
            b << char(55+f) << ":" << d[f] << endl;
            f++;
        }
    }
}
