#include <iostream>

using namespace std;

int main ()
{
    long long int n, d=0, k=1, a[100], i=0;
    cout << "Program sprawdza ile dzielnikow ma liczba calkowita dodatnia";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    if (n<0)
    {
        cout << endl << "Zle dane";
    }
    else
    {
        cout << "Takie ma dzielniki: ";
        for (int k=2; k<=(n/2); k++)
        {
            if (n%k==0)
            {
                cout << endl << k;
                d++;
            }
        }
        cout << endl << "Czyli ma ";
        cout << d;
        cout << " dzielnikow.";
    }
    return 0;
}
