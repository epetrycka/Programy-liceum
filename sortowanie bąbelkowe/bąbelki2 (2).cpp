#include <iostream>

using namespace std;

main()
{
    int a[10000], n, nn, p;
    cout << "Program sortuje podane liczby babelkowo";
    cout << endl << "Ile liczb chcesz posortowac: ";
    cin >> n;
    nn=n;
    for (int i=0; i<n; i++)
    {
        cout << endl << "Podaj " << i+1 << " liczbe: ";
        cin >> a[i];
    }
    while (n>0)
    {
        for (int k=0; k<n-1; k++)
        {
            if (a[k]>a[k+1])
            {
                p=a[k];
                a[k]=a[k+1];
                a[k+1]=p;
            }
        }
        n--;
    }
    cout << endl << "Posortowane liczby: ";
    for (int i=0; i<nn; i++)
    {
        cout << a[i] << ", ";
    }
    return 0;
}
