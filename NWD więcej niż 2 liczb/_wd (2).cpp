#include <iostream>

using namespace std;

main()
{
    int n, a, b, i=0, m[100];
    cout << "Program oblicza nwd podanych liczb.";
    cout << endl << "Podaj ilosc liczb: ";
    cin >> n;
    if (n<2)
    {
        cout << endl << "Zle dane";
    }
    else
    {
        cout << endl << "Podaj pierwsza liczbe: ";
        cin >> a;
        cout << endl << "Podaj druga liczbe: ";
        cin >> b;
        while (a != b)
        {
           if (a>b)
           {
               a -= b;
           }
           else
           {
               b -= a;
           }
        }
        if (n>2)
        {
            for (int i=0; i<(n-2); i++)
        {
            cout << endl << "Podaj nastepna liczbe: ";
            cin >> m[i];
            while (a != m[i])
            {
                if (a>m[i])
                {
                    a -= m[i];
                }
                else
                {
                    m[i] -= a;
                }
            }
        }
        }
        cout << "NWD wynosi ";
        cout << a;
    }
}
