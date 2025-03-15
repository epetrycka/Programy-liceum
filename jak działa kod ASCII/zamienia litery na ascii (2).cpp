#include <iostream>

using namespace std;

main()
{
    char a;
    while (a!='0')
    {
    cout << endl << "Podaj litere: ";
    cin >> a;
    cout << endl << "To kod ascii: " << int (a);
    }
}
