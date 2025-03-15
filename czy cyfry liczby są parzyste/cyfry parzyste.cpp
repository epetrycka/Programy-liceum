#include <iostream>
#include <string>

using namespace std;

main()
{
    cout << "Program sprawdza czy wszystkie cyfry podanej liczby sa parzyste";
    string n;
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    for (int i=0; i<=n.size(); i++)
    {
        if (n[i]%2!=0)
        {
            cout << endl << "Cyfry podanej liczby nie sa parzyste";
            return 0;
        }
        else
        {
           cout << endl << "Cyfry podanej liczby sa parzyste";
           return 0;
        }
    }
}
