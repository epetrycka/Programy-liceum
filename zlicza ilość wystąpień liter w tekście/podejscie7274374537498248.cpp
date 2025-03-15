#include <iostream>
#include <string>
#include <cctype>

using namespace std;

main()
{
    char o;
    int i, a[26];
    string n;
    cout << "Program liczy ilosc wystapien liter w tekscie";
    cout << endl << "Podaj tekst: ";
    getline(cin, n);
    for (i=0; i<26; i++)
    {
        a[i]=0;
    }
    for (i=0; i<n.size(); i++)
    {
        o=toupper(n[i]);
        if (o>='A' && o<='Z')
        {
            a[o-'A']++;
        }
    }
    for (i=0; i<26; i++)
    {
        if (a[i]>0)
        {
            cout << char(i+'A') << " : ";
            cout << a[i] << endl;
        }
    }
    return 0;
}
