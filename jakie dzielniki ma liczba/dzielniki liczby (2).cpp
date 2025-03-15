#include <iostream>

using namespace std;

main()
{
    cout << "Program wypisuje dzielniki podanej liczby";
    unsigned long long int n;
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    cout << endl << "Liczba ma takie dzielniki: ";
    for (unsigned long long int i=1; i<=n/2; i++)
    {
        if (n%i==0)
        {
            cout << i << ", ";
        }
    }
    return 0;
}
