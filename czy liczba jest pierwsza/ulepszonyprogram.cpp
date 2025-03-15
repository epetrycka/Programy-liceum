#include <iostream>

using namespace std;

bool n(int k)
{
    for (int i=2; k>=(i*i); i++)
    {
        if (k%i==0)
        {
            return 0;
        }
    }
    return 1;
}

main()
{
    int k;
    cout << "Program sprawdza czy podana liczba jest pierwsza";
    cout << endl << "Podaj liczbe: ";
    cin >> k;
    if (k==0 || k==1)
    {
        cout << endl << "Podana liczba nie jest pierwsza ani zlozona";
    }
    else
    {
        if (n(k)==0)
        {
            cout << endl << "Podana liczba jest zlozona";
        }
        if (n(k)==1)
        {
            cout << endl << "Podana liczba jest pierwsza";
        }
    }
    return 0;
}
