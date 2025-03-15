#include <iostream>

using namespace std;

main()
{
    cout << endl << "Porogram zamieni liczbe z systemu 2 na 10";
    string k;
    int d=0, p=1;
    cout << endl << "Podaj liczbe w systemie 2: ";
    cin >> k;
    for (int i=k.size()-1; i>=0; i--)
    {
        if (k[i]=='1')
        {
            d=d+p;
        }
        p=p*2;
    }
    cout << endl << "Liczba w systemie 10 to: " << d;
    return 0;
}
