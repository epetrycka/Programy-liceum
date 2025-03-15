#include <iostream>

using namespace std;

main()
{
    cout << endl << "Program zamieni liczbe z systemu 2 na 10";
    string k;
    int d=0;
    cout << endl << "Podaj liczbe: ";
    cin >> k;
    for (int i=0; i<k.size(); i++)
    {
        d=d*2;
        if (k[i]=='1')
        {
            d=d+1;
        }
    }
    cout << endl << "Liczba w systemie 10 to: " << d;
    return 0;
}
