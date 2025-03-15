#include <iostream>

using namespace std;

main()
{
    int a, b, c;
    cout << "Program podaje najmniejsza liczbe z podanych przez uzytkownika";
    cout << endl << "Wpisz ile liczb chcesz podac: ";
    cin >> a;
    cout << endl << "Podaj 1 liczbe: ";
    cin >> b;
    for (int i=2; i<=a; i++)
    {
        cout << endl << "Podaj " << i << " liczbe: ";
        cin >> c;
        if (c<b)
        {
            b=c;
        }
    }
    cout << endl << "Najmniejsza liczba z podanych to: " << b;
    return 0;
}
