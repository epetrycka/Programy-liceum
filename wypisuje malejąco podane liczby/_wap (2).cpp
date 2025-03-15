#include <iostream>

using namespace std;

main()
{
    int n, t[100];
    cout << endl << "Podaj liczby, a program wypisze je malejaco";
    cout << endl << "Podaj ile liczb chcesz podac: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << endl << "Podaj " << i+1 << " liczbe: ";
        cin >> t[i];
    }
    for (int i=0; i<n; i++)
    {
        if (t[i]<t[i+1])
        {
            swap(t[i], t[i+1]);
        }
    }
    for (int i=0; i<n; i++)
    {
        cout << t[i] << ", ";
    }
    return 0;
}
