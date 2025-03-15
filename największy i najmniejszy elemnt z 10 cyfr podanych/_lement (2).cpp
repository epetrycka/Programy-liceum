#include <iostream>

using namespace std;

main()
{
    int a[10], b, c;
    cout << endl << "Program podaje najwiekszy i najmniejszy element z 10 cyfr podanych przez uzytkownika";
    for (int i=0; i<10; i++)
    {
        cout << endl << "Podaj " << i+1 << " liczbe: ";
        cin >> a[i];
    }
    b=a[0];
    c=a[0];
    for (int i=1; i<10; i++)
    {
        if (b>a[i])
        {
            b=a[i];
        }
    }
    for (int i=1; i<10; i++)
    {
        if (c<a[i])
        {
            c=a[i];
        }
    }
    cout << endl << "Najwieksza liczba z podanych to: " << c;
    cout << endl << "Nanjmniejsza liczba z podanych to: " << b;
    return 0;
}
