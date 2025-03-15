#include <iostream>

using namespace std;

main()
{
    int a, b[100], i=0;
    cout << endl << "Podaj liczbe do zamiany z systemu dziesietnego na dwojkowy: ";
    cin >> a;
    for (i=0; a>0; i++)
    {
        b[i]=a%2;
        a=a/2;
    }
    cout << endl << "Podana liczba w systemie dwojkowym to: ";
    while (i>0)
    {
        i--;
        cout << b[i];
    }
    return 0;
}
