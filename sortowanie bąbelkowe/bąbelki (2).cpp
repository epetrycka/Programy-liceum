#include <iostream>

using namespace std;

main()
{
    int n, a[100], c;
    cout << "Program sortuje liczby babelkowo rosnaco";
    cout << endl << "Ile liczb chcesz posortowac: ";
    cin >> n;
    cout << endl << "Podaj liczby: " << endl;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    for (int p=1; p<n; p++)
    {
        for (int k=0; k<(n-p); k++)
        {
            if (a[k]>a[k+1])
            {
                c=a[k];
                a[k]=a[k+1];
                a[k+1]=c;
            }
        }
    }
    cout << endl << "Liczby posortowane: ";
    for (int j=0; j<n; j++)
    {
        cout << a[j] << " ";
    }
    return 0;
}
