#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    int t[6]={6, 2, 4, 1, 5, 3};
    string k;
    fstream x, y;
    x.open ("wynik_szyfr3.txt", ios::out);
    y.open ("szyfr3.txt", ios::in);
    y >> k;
    for (int i=(k.size()-1); i>=0; i--)
    {
        swap (k[i], k[(t[i%6]-1)]);
    }
    x << k;
    return 0;
}

