#include <iostream>

using namespace std;

main()
{
    cout << "Program realizuje algorytm pisemnego mnozenia";
    int a, b;
    cout << endl << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << endl << "Podaj druga liczbe: ";
    cin >> b;
    cout << endl << "Wynik: ";
    cout << ((a%10)*b+(a/10)*b*10);
    return 0;
}
