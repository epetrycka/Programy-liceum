#include <iostream>
#include <string>
using namespace std;

main()
{
    int k=1, w=0;
    string n;
    cout << endl << "Program z podanej liczby binarnej wypisuje znak z kodu ASCII";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    for (int i=n.size()-1; i>=0; i--)
    {
        w=((n[i]-48)*k)+w;
        k=k*2;
    }
    cout << endl << w;
    cout << endl << "Podany znak to: " << char(w);
    return 0;
}
