#include <iostream>

using namespace std;

main()
{
    int a, b, c, d, r, e;
    cout << "Program oblicza NWD dwoch liczb oraz ich NWW.";
    cout << endl << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << endl << "Podaj druga liczbe: ";
    cin >> b;
    while (b>0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    if(b==0)
    {
        cout << endl << "NWD wynosi: ";
        cout << a;
    }
}
