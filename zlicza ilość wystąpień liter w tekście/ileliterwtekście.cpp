#include <iostream>
#include <string>

using namespace std;

main()
{
    cout << "Program zlicza ilosc wystapien liter w tekscie";
    int i, a[26];
    string n;
    cout << endl << "Podaj tekst: ";
    cin >> n;
    for (i=0; i<26; i++)
    {
        a[i]=0;
    }
    for (i=0; i<n.size(); i++)
    {
        a[n[i]-'A']++;
    }
    for (i=0; i<26; i++)
    {
        if (a[i]>0)
        {
            cout << char (i+'A') << " - ";
            cout << a[i] << endl;
        }
    }
    return 0;
}
