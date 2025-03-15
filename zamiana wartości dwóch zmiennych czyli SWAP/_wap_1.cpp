#include <iostream>

using namespace std;

main()
{
    int a, b, c, d, pom;
    cout << endl << "Dwa sposoby zamiany miejscami zmiennych";
    cout << endl << "Podaj liczbe a: ";
    cin >> a;
    cout << endl << "Podaj liczbe b: ";
    cin >> b;
    pom=a;
    a=b;
    b=pom;
    cout << endl << "No i teraz a=" << a << " natomiast b=" << b;
    cout << endl << "Sposob drugi";
    cout << endl << "Podaj liczbe c: ";
    cin >> c;
    cout << endl << "Podaj liczbe d: ";
    cin >> d;
    swap(c, d);
    cout << endl << "No i teraz c=" << c << " natomiast d=" << d;
    return 0;
}
