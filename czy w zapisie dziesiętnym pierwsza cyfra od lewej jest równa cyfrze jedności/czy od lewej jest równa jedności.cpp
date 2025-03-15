#include <iostream>
#include <string>

using namespace std;

main ()
{
    string n;
    cout << "Program sprawdza czy w zapisie dziesietnym wczytanej liczby calkowitej dodatniej pierwsza cyfra od lewej jest taka sama jak cyfra jednosci";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    if (n[(n.size()-1)]==n[0])
    {
        cout << endl << "TAK";
    }
    else
    {
        cout << endl << "NIE";
    }
    return 0;
}
