#include <iostream>

using namespace std;

main()
{
    cout << endl << "Program podnosi szybko podane liczby do potegi o wykladniku naturalnym";
    unsigned long long int w, p;
    unsigned long long k=1;
    cout << endl << "Podaj podstawe potegi: ";
    cin >> p;
    cout << endl << "Podaj wykladnik: ";
    cin >> w;
    while (w>0)
    {
        if (w%2==1)
        {
            k=p*k;
        }
        w=w/2;
        p=p*p;
    }
    cout << endl << "Wynik to: " << k;
    return 0;
}
