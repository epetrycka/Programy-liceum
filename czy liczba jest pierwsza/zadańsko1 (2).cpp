#include <iostream>

using namespace std;

int main()
{
    cout << "Program okresla czy podana liczba jest liczba pierwsza";
    int n, d=5;
    bool pierwsza;
    cout << endl << "Podaj liczbe: "; cin >> n;
    pierwsza=(n>1);
    if (n>2 && n%2==0)
        pierwsza=false;
    if (n>3 && n%3==0)
        pierwsza=false;
    while (pierwsza && (d*d)<=n)
        if (n%d==0)
            pierwsza=false;
        else
            if (n%(d+2)==0)
            pierwsza=false;
            else d=d+6;
    if (pierwsza)
    cout << "Tak liczba jest liczba pierwsza";
    else
    cout << "Nie liczba nie jest liczba pierwsza";
    return 0;
}
