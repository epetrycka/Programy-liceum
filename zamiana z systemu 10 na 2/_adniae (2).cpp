#include <iostream>

using namespace std;

int main ()
{
    int n, i=0, tab[10];
    cout << "Podaj liczbe w systemie dziesietnym do zamiany na system dwojkowy: ";
    cin >> n;
    if (n>=0)
    {
        while (n>0)
        {
            tab[i++]=n%2;
            n=n/2;
        }
        cout << endl << "Reprezentacja binarna tej liczby to: ";
        for (int j=i-1;j>=0;j--)
        {
            cout << tab[j];
        }
    }
}
