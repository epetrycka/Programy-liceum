#include <iostream>

using namespace std;

main()
{
    cout << endl << "Program sprawdza czy istnieje trojkat o podanych bokach";
    int a, b, c;
    cout << endl << "Podaj boki: " << endl;
    cin >> a >> b >> c;
    if (a+b>c && a+c>b && b+c>a)
    {
        cout << endl << "Tak istnieje trojkat o podanych bokach";
    }
    else
    {
        cout << endl << "Nie istnieje taki trojkat";
    }
    return 0;
}
