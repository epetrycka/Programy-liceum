#include <iostream>

using namespace std;

main()
{
    long long int n;
    int k;
    cout << endl << "Program poda ile jedynek wystepuje w reprezentacji binarnej podanej liczby";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    while (n>0)
    {
        if (n%2==1)
        {
            k++;
        }
        n=n/2;
    }
    cout << endl << "W reprezentacji binarnej podanej liczby wystepuje: " << k << " jedynek";
    return 0;
}
