#include <iostream>

using namespace std;

main ()
{
    int n, i=2, ile;
    cout << "Program liczy dzielniki liczby calkowitej wieksze od 1";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    for (int i=2; i<n; i++)
    {
       if (n%i==0)
       {
           ile++;
       }
    }
    cout << endl << "Liczba ma " << ile << " dzielnikow";
    return 0;
}
