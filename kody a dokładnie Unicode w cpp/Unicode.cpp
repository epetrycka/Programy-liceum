#include <iostream>

using namespace std;

main()
{
    cout << "Kodowanie ASCII: ";
    char k;
    int p;
    cout << endl << "Podaj jakas wartosc w kodzie ASCII: ";
    cin >> p;
    cout << endl << "Oto literka z kodu ASCII: " << char(p);
    cout << endl << "Podaj literke: ";
    cin >> k;
    cout << endl << "Oto jej kod ASCII: " << int(k);
    cout << endl << "A teraz kody Unicode";
    cout << endl << wchar_t(p);
    cout << endl << wchar_t(k);
}
