#include <iostream>

using namespace std;

main()
{
    cout << endl << "Program zamieni liczbe z systemu 10 na dowolny";
    string k="";
    int d, p;
    cout << endl << "Podaj liczbe do zamiany: ";
    cin >> d;
    cout << endl << "Podaj podstawe finalnego systemu: ";
    cin >> p;
    while (d>0)
    {
        if (d%p>9)
        {
            k=char(d%p+'A'-10)+k;
        }
        else
        {
            k=char(d%p+'0')+k;
        }
        d=d/p;
    }
    cout << endl << "Liczba w systemie " << p << " to: " << k;
    return 0;
}
