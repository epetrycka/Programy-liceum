#include <iostream>
#include <cmath>
using namespace std;

main()
{
    int p, s, a[100], i, d=0;
    cout << "Program oblicza wartosc wielomianu";
    cout << endl << "Podaj stopien wielomianu: ";
    cin >> s;
    cout << endl << "Podaj x systemu: ";
    cin >> p;
    for (i=s; i>=0; i--)
    {
        cout << endl << "Podaj a" << i << " : ";
        cin >> a[i];
    }
    cout << endl << "Wielomian dla wspolczynnikow ";
    for (i=s; i>=0; i--)
    {
        cout << a[i] << ", ";
        d=d+(a[i]*(pow(p, i)));
    }
    cout << " i dla argumentu " << p << " daje ";
    cout << d;
    return 0;
}
