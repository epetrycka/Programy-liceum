#include <iostream>

using namespace std;

main()
{
    cout << endl << "Program zamieni liczbe z 10 na dowolny mniejszy od 10";
    string k="";
    int p, d;
    cout << endl << "Podaj liczbe: ";
    cin >> d;
    cout << endl << "Podaj podstawe finalnego systemu: ";
    cin >> p;
    while (d>0)
    {
        k=char(d%p+48)+k;
        d=d/p;
    }
    cout << endl << "Liczba w systemie " << p << " to: " << k;
    return 0;
}
