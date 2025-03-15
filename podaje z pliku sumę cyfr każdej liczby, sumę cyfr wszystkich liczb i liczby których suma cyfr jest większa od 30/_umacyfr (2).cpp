#include <iostream>
#include <fstream>

using namespace std;

main()
{
    int t[1000], sc, scl=0, f, e;
    fstream a, b, c, d;
    a.open ("liczby.txt", ios::in);
    b.open ("suma cyfr kazdej liczby.txt", ios::out);
    c.open ("liczby ktorych suma cyfr jest wieksza od 30.txt", ios::out);
    while (!a.eof())
    {
        a >> f;
        e=f;
        sc=0;
        while (f>0)
        {
            sc=sc+f%10;
            f=f/10;
        }
        b << sc << endl;
        if (sc>30)
        {
            c << e << endl;
        }
        scl=scl+sc;
    }
    a.close();
    b.close();
    c.close();
    d.open ("suma wszystkich cyfr z pliku.txt", ios::out);
    d << scl;
    d.close();
    cout << "Poszlo";
    return 0;
}
