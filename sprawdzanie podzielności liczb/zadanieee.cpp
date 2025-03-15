#include <iostream>

using namespace std;

int main()
{
    long long int a, b;
    cout << "Program sprawdza czy podana liczba jest podzielna przez podana druga liczbe.";
    cout << endl << "Podaj dzielna: ";
    cin >>a;
    cout << endl << "Podaj dzielnik: ";
    cin >>b;
    if (a%b==0)
    {
        cout << endl << "Podana liczba jest podzielna przez podana liczbe";
    }
    else
    {
        cout << endl << "Podana liczba nie jest podzielna przez podana liczbe";
    }
    return 0;
}
