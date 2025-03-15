#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string a(string s)
{
    int i=0;
    while (i<s.size())
        if (toupper(s[i])>='A' && toupper(s[i])<='Z') i++;
        else s.erase(i,1);
    return s;
}

int main()
{
    string b, c;
    int i=0, j;
    bool palindrom=true;
    cout << "Program okresla czy podany tekst jest palindromem.";
    cout << endl << "Podaj tekst: "; getline(cin,b);
    c=a(b);
    j=c.size()-1;
    while (palindrom && i<j)
        if (toupper(c[i])==toupper(c[j]))
        {
            i++; j--;
        }
        else (palindrom)=false;
    if (palindrom) cout<<"Tak, podany tekst jest palindromem.";
    else cout<<"Nie, podany tekst nie jest palindromem.";
    return 0;
}
