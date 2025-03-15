#include <iostream>
#include <string>


using namespace std;

main()
{
    char p;
    string w;
    cout << endl << "Program poda czy jakas litera w slowie sie powtarza";
    cout << endl << "Podaj slowo: ";
    cin >> w;
    for (int i=0; i<w.size(); i++)
    {
        p=w[i];
        w.erase(i, 1);
        if (w.find(p)<w.size())
        {
            cout << endl << "TAK";
            return 0;
        }
    }
    cout << endl << "NIE";
    return 0;
}
