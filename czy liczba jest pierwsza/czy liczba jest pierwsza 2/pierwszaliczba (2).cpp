#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i=2;
    cout << "Program sprawdza czy podana liczba jest liczba pierwsza.";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    if (n==0)
    {
        cout << endl << "Podana liczba nie jest ani liczba pierwsza ani liczba zlozona.";
    }
    else
    {
    if (n==1 or n==2)
        {
            cout << endl << "Podana liczba jest liczba pierwsza";
        }
        else
        {
            for (i; i<sqrt(n); i++)
            {
                    if (n%i==0)
                {
                    cout << endl << "Podana liczba nie jest liczba pierwsza";
                }
                else
                {
                    cout << endl << "Podana liczba jest liczba pierwsza";
                }
            }
        }
    }
}
