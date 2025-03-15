#include <iostream>
#include <string>

using namespace std;

main()
{
    int n, m=1, t[1000], i=1;
    cout << endl << "Program zamienia liczbe 10 na 2 ale bardziej sprytnie";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    while (m<n)
    {
        m=2*m;
    }
    m=m/2;
    t[0]=1;
    n=n-m;
    while (n>0)
    {
        if (m/2<=n)
        {
            t[i]=1;
            n=n-(m/2);
            m=m/2;
        }
        else
        {
            t[i]=0;
            m=m/2;
        }
        i++;
    }
    cout << endl << "Wartosc binarna tej liczby to: ";
    for (int j=0; j<i; j++)
    {
        cout << t[j];

    }
    return 0;
}
