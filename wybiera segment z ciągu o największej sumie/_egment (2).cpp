#include <iostream>

using namespace std;

main()
{
    int n, k[1000], m=0, t=0, p=0;
    cout << endl << "Podaj ile wyrazow ma ciag: ";
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cout << endl << "Podaj " << i << " wyraz ciagu: ";
        cin >> k[i];
    }
    t=k[0];
    p=t;
    m++;
    while (m<n)
    {
        t=max(k[m], t+k[m]);
        p=max(t, p);
        m++;
    }
    cout << endl << "Najwieksza suma to: " << p;
}
