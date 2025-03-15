#include <iostream>
#include <fstream>

using namespace std;

int N=100000;
int x[1000], y[1000];
fstream a, b;

int rysuj(int x)
{
    if (2*x<=N)
    {
        rysuj(2*x);
    }
    if (2*x+1<=N)
    {
        rysuj (2*x+1);
    }
}

main()
{
    a.open("pary.txt", ios::in);
    b.open("wyniki22.txt", ios::out);
    if (!a.good())
    {
        cout << "Brak pliku";
    }
    else
    {
        int i=0;
        cout << rysuj(3, 6);
        while (!a.eof())
        {
            a >> x[i];
            a >> y[i];
            if (rysuj(x[i], y[i])==y[i])
            {
                b << x[i] << "  " << y[i] << endl;
            }
            i++;
        }
    }
}
