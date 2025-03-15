#include <iostream>

using namespace std;

main()
{
    cout << "Program pobiera od uzytkownika liczby, dopoki uzytkownik nie poda zera i nastepnie wypisuje najwieksza z nich";
    cout << endl << "Program zakonczy pobieranie liczb dopoki nie wypiszesz '0'";
    int a[1000], i=0;
    for (int i=0; i<1000; i++)
    {
        cout << endl << "Podaj " << i+1 << " liczbe: ";
        cin >> a[i];
        if (a[i]==0)
        {
            for (int u=0; u<i; u++)
            {
                if (a[u]>a[0])
                {
                    a[0]=a[u];
                }
            }
            cout << endl << "Najwieksza liczba z podanych to: " << a[0];
            return 0;
        }
    }
}
