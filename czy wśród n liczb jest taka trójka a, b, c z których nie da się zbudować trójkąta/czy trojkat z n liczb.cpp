#include <iostream>

using namespace std;

main()
{
    int n, t[1000];
    cout << endl << "Program powie czy w podanych n liczbach jest taka trojka liczb a, b, c, z ktorych nie mozna zbudowac trojkata";
    cout << endl << "Podaj ile liczb chcesz podac: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << endl << "Podaj liczbe: ";
        cin >> t[i];
    }
    for (int i=n; i>0; i--)
    {
        for (int k=1; k<i; k++)
        {
            if (t[k-1]<t[k])
            {
                swap(t[k], t[k-1]);
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        cout << t[i] << ", ";
    }
    if (t[0]>(t[n-1]+t[n-2]))
    {
        cout << endl << "Tak, sa to boki " << t[0] << ", " << t[n-1] << ", " << t[n-2];
    }
    else
    {
        cout << endl << "Nie ma takiej trojki";
    }
    return 0;
}
