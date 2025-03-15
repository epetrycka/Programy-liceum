#include <iostream>
#include <string>

using namespace std;

main()
{
    string n;
    cout << "Program sprawdza czy cyfry podanej liczby tworza ciag malejacy";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    for (int i=0; i<=n.size(); i++)
    {
        if (n[0]>=n[i])
        {
            n[0]=n[i];
            if (i>=n.size())
            {
                cout << endl << "Cyfry tworza ciag malejacy";
            }
        }
        else
        {
            cout << endl << "Cyfry nie tworza ciagu malejacego";
            return 0;
        }
    }
    return 0;
}
