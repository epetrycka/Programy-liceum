#include <iostream>
#include <fstream>

using namespace std;

bool c(int n)
{
    if (n%2!=0)
    {
        for (int i=2; i<=n/2; i++)
        {
            if (n%i==0)
            {
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
    return 1;
}
main()
{
    int n, p=0, m, w, k=0, l=0;
    fstream x, y;
    x.open("dane_6.txt", ios::in);
    y.open("wynik_6.txt", ios::out);
    y << "Zad.3 Pary bliŸniacze: ";
    x >> n;
    m=n;
    w=n;
    if (n!=0 && n!=1)
    {
        if (c(n)==1)
        {
            p++;
            k=n;
        }
    }
    while (!x.eof())
    {
        x >> n;
        if (n!=0 && n!=1)
        {
            if (c(n)==1)
            {
                p++;
                if (k!=0)
                {
                    if ((n-k)==2)
                    {
                        l++;
                        y << endl << k << " i " << n;
                    }
                }
                k=n;
                if (n<m)
                {
                    m=n;
                }
                if (n>w)
                {
                    w=n;
                }
            }
            else
            {
                k=0;
            }
        }
        else
        {
            k=0;
        }
    }
    y << endl << "Par jest: " << l;
    y << endl << "Zad.1 Tyle liczb z pliku jest pierwszych: " << p;
    y << endl << "Zad.2 Najmniejsza liczba pierwsza to: " << m << endl << "Najwieksza liczba pierwsza to: " << w;
    x.close();
    y.close();
    return 0;
}
