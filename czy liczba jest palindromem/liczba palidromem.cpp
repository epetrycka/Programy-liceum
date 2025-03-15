#include <iostream>
#include <string>

using namespace std;

main()
{
    cout << "Program sprawdza czy podana liczba jest palindromem";
    string n;
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    for (int i=0; i<(n.size()/2); i++)
    {
        if(n[0+i]!=n[(n.size()-1)-i])
        {
            cout << endl << "Liczba nie jest palindromiczna";
            return 0;
        }
    }
    cout << endl << "Liczba jest palindromiczna";
    return 0;
}
