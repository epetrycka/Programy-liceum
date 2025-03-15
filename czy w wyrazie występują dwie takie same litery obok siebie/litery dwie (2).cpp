#include <iostream>
#include <string>

using namespace std;

main()
{
    string w;
    cout << endl << "Program sprawdzi czy w wyrazie wystepuja dwie takie same litery obok siebie";
    cout << endl << "Podaj wyraz: ";
    cin >> w;
    for (int i=0; i<w.size()-1; i++)
    {
        if (int (w[i])==int (w[i+1]))
        {
            cout << endl << "TAK";
            return 0;
        }
    }
    cout << endl << "NIE";
    return 0;
}
