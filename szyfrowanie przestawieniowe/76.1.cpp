#include <iostream>
#include <fstream>
#include <string>

using namespace std;

fstream x, y;

void szyfrowanie(string k, int t[50])
{
    for (int i=0; i<k.size(); i++)
    {
        swap (k[i], k[(t[i%50])-1]);
    }
    x << k << endl;
}

main()
{
    string a, b, c, d, e, f;
    int t[50];
    x.open ("wynik_szyfr1.txt", ios::out);
    y.open ("szyfr1.txt", ios::in);
        y >> a;
        y >> b;
        y >> c;
        y >> d;
        y >> e;
        y >> f;
        for (int i=0; i<50; i++)
        {
            y >> t[i];
        }
    szyfrowanie(a, t);
    szyfrowanie(b, t);
    szyfrowanie(c, t);
    szyfrowanie(d, t);
    szyfrowanie(e, t);
    szyfrowanie(f, t);
    return 0;
}
