#include <iostream>

using namespace std;

main()
{
    cout << "Program stwierdza czy podana liczba jest pierwsza";
    unsigned long long int n, d=0;
    cout << endl << "Podaj liczbe do sprawdzenia: ";
    cin >> n;
    if (n==1 || n==0)
    {
        cout << endl << "Podana liczba nie jest liczba pierwsza ani liczba zlozona";
    }
    else
    {
        if (n%2==0 && n!=2)
        {
            cout << endl << "Podana liczba jest liczba zlozona";
        }
        else
        {
            for (unsigned long long int i=3; (i<n/2 && d==0); i++)
            {
                if (n%i==0)
                {
                    d++;
                }
            }
            if (d>0)
            {
                cout << endl << "Podana liczba jest liczba zlozona";
            }
            else
            {
                cout << endl << "Podana liczba jest liczba pierwsza";
            }
        }
    }
    return 0;
}
