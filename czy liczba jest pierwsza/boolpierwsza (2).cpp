#include <iostream>

using namespace std;

bool w(int k)
{
    for (int i=2; i<k; i++)
    {
        if (k%i==0)
        {
            return 0;
        }
    }
    return 1;
}

main ()
{
    int k;
    cout << endl << "Program sprawdza czy podana liczba jest pierwsza";
    cout << endl << "Podaj liczbe: ";
    cin >> k;
    if (k==0 || k==1)
    {
       cout << endl << "Podana liczba nie jest liczba pierwsza ani liczba zlozona";
    }
    else
    {
        if (w(k)==1)
        {
            cout << endl << "Podana liczba jest liczba pierwsza";
        }
        else
        {
            cout << endl << "Podana liczba jest liczba zlozona";
        }
    }
    return 0;
}
