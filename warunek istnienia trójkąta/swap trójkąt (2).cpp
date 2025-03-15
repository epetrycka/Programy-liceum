#include <iostream>

using namespace std;

main()
{
    int a, b, c;
    cout << endl << "Program sprawdza czy istnieje trojkat o podanych bokach";
    cout << endl << "Podaj boki:" << endl;
    cin >> a >> b >> c;
    if (a<b)
    {
        swap(a, b);
    }
    if (c>a)
    {
        swap(c, a);
    }
    if (c+b>a)
    {
        cout << endl << "Tak taki trojkat istnieje";
    }
    else
    {
        cout << endl << "Nie istnieje taki trojkat";
    }
    return 0;
}
