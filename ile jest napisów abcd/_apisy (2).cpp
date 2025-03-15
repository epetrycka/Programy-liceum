#include <iostream>
#include <string>
#include <fstream>

using namespace std;

bool p(string x)
{
    if ((x.size())%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool z(string j)
{
    int a=0, b=0;
    for (int i=0; i<(j.size()); i++)
    {
        if (j[i]=='0')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if (a==b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool o(string w)
{
    if (w.find('1')>=0 && w.find('1')<(w.size()))
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool j(string w)
{
    if (w.find('0')>=0 && w.find('0')<(w.size()))
    {
        return false;
    }
    else
    {
        return true;
    }
}

int g(string x, int d[14])
{
    d[(x.size()-2)]++;
}

main()
{
    int h=0, k=0, ow=0, jw=0, d[15]={0};
    string x[1000];
    fstream a, b;
    a.open("napisy.txt", ios::in);
    b.open("zadanie4.txt", ios::out);
    while (!a.eof())
    {
        for (int i=0; i<1000; i++)
        {
            a >> x[i];
        }
    }
    for (int f=0; f<1000; f++)
    {
        if (p(x[f])==true)
        {
            h++;
            if (z(x[f])==true)
            {
                k++;
            }
        }
        if (o(x[f])==true)
        {
            ow++;
        }
        if (j(x[f])==true)
        {
            jw++;
        }
        g(x[f], d);
    }
    b << "Odpowiedzi: " << endl << "A) Tyle napisow jest parzystej dlugosci: " << h;
    b << endl << "B) Tyle napisow ma w zapisie tyle samo zer co jedynek: " << k;
    b << endl << "C) Tyle napisow sklada sie z samych zer: " << ow;
    b << endl << "Tyle napisow sklada sie z samych jedynek: " << jw;
    b << endl << "D) Ilosc napisow o k dlugosci:";
    for (int i=0; i<=14; i++)
    {
        b << endl << "k=" << (i+2) << ": " << d[i];
    }
    return 0;
}
