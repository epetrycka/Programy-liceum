#include <iostream>
#include <string>

using namespace std;

main ()
{
    int t[10], c;
    string a;
    cout << "Program dzieli liczbe na cyfry";
    cout << endl << "Podaj liczebke: ";
    cin >> t[0];
    a=t[0];
    for (int i=0; i<a.size(); i++)
    {
        cout << endl << a[i];
    }
    return 0;
}
