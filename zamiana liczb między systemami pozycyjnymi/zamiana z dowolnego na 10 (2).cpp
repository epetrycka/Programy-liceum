#include <iostream>

using namespace std;

main()
{
    cout << endl << "Program zamieni liczbe z dowolnego systemu pozycyjnego na 10";
    string k;
    int p;
    long long int w=0;
    cout << endl << "Podaj liczbe do zamiany: ";
    cin >> k;
    cout << endl << "Podaj podstawe tego systemu: ";
    cin >> p;
    for (int i=0; i<k.size(); i++)
    {
        w=w*p;
        if (k[i]>58)
        {
            w=w+(int(k[i])-55);
        }
        else
        {
            w=w+(int(k[i])-48);
        }
    }
    cout << endl << "Liczba w systemie 10 wynosi: " << w;
    return 0;
}
