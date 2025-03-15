#include <iostream>
#include <string>

using namespace std;

main()
{
    int n;
    string i;
    cout << endl << "Program wypisze powitanie.";
    cout << endl << "Podaj imie: ";
    cin >> i;
    cout << endl << "Podaj wiek: ";
    cin >> n;
    if (n<18)
    {
        cout << endl << "Czesc " << i;
    }
    else
    {
        cout << endl << "Dzien dobry " << i;
    }
    return 0;
}
