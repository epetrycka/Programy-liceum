#include <iostream>

using namespace std;

int main()
{
    int n;
    double x, wynik, a[100];
    cout << "Schemat Hornera" << endl;
    cout << endl << "Podaj wielkosc wielomianu: ";
    cin >> n;
    if (n>0)
    {
        cout << endl << "Podaj podstawe systemu: ";
        cin >> x;
        for (int i=0; i<=n; i++)
        {
            cout << endl << "Podaj a" << i << ": ";
            cin >> a[1];
        }
        wynik=a[0];
        for (int i=1; i<=n; i++)
        {
            wynik=wynik*x+a[1];
        }
        cout << endl << "Wynik wielomianu wynosi: " << wynik;
    }
    else if(n==0)
    {
        cout << endl << "Podaj a0: ";
        cin >> a[0];
        wynik=a[0];
        cout << endl << "Wynik wielomianu wynosi: " << wynik;
    }
    else
    {
        cout << endl << "Zla wartosc";
    }
}
