#include <iostream>
#include <fstream>
#include <string>

using namespace std;

fstream x, y;

void szyfrowanie(string k, int t[15])
{
    for (int i=0; i<k.size(); i++)
    {
        swap (k[i], k[(t[i%15])-1]);
    }
    x << k << endl;
}

main()
{
    string a;
    int t[15];
    x.open ("wynik_szyfr2.txt", ios::out);
    y.open ("szyfr2.txt", ios::in);
        y >> a;
        for (int i=0; i<15; i++)
        {
            y >> t[i];
        }
    szyfrowanie(a, t);
    return 0;
}
