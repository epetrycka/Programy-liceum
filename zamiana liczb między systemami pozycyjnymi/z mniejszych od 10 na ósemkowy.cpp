#include <iostream>

using namespace std;

main()
{
    int p, n, a[1000], m, b[1000];
    int z=0;
    cout << endl << "Program zamienia liczby w systemow mniejszych od 10 na osemkowy";
    cout << endl << "Podaj ile cyfr ma liczba: ";
    cin >> n;
    n=n-1;
    cout << endl << "Podaj podstawe systemu: ";
    cin >> p;
    for (int j=n; j>=0; j--)
    {
        cout << endl << "Podaj liczbe a[" << j << "]: ";
        cin >> a[j];
    }
    while (n>=0)
    {
        z=z*p+a[n];
        n--;
    }
    m=0;
    for (m=0; z>0; m++)
    {
        b[m]=z%8;
        z=z/8;
    }
    m=m-1;
    cout << endl << "Liczba w systemie osemkowym ma tyle cyfr: " << m;
    cout << endl << "Liczba w systemie osemkowym wygl¹da tak: ";
    for (int h=m; h>=0; h--)
    {
        cout << b[h];
    }
    return 0;
}
