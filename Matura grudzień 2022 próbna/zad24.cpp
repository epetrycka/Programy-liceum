#include <iostream>
#include <fstream>

using namespace std;

int x[1000], y[1000];
fstream a, b;

bool czy (int x, int y)
{
    while (y>=x)
    {
        if (x==y)
        {
            return true;
        }
        y=y/2;
    }
    return false;
}

main()
{
    a.open("pary.txt", ios::in);
    b.open("wyniki2.txt", ios::out);
    if (!a.good())
    {
        cout << "Brak pliku";
    }
    else
    {
        int i=0;
        while (!a.eof())
        {
            a >> x[i];
            a >> y[i];
            if (czy(x[i], y[i])==true)
            {
                b << x[i] << "  " << y[i] << endl;
            }
            i++;
        }
    }
}
