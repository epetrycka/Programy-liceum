#include <iostream>
#include <string>

using namespace std;
main ()
{
    int k, i, o, p;
    string zdanie;
    const string alfabet_m="abcdefghijklmnopqrstuvwyz";
    const string alfabet_d="ABCDEFGHIJKLMNOPQRSTUVWYZ";
    cout << "Podaj zdanie do zaszyfrowania: ";
    getline(cin,zdanie);
    cout << "Podaj klucz szyfru: ";
    cin >> k;
    for (int i=0; i<zdanie.size(); i++)
    {
        o=alfabet_m.find(zdanie.substr(i,1))+k;
        p=alfabet_d.find(zdanie.substr(i,1))+k;
        if (o>alfabet_m.size())
        {
            o=(alfabet_m.find(zdanie.substr(i,1))+k)%alfabet_m.size();
        }
        if (p>alfabet_d.size())
        {
            p=(alfabet_d.find(zdanie.substr(i,1))+k)%alfabet_d.size();
        }
        if (zdanie.substr(i,1)==" ")
        {
            cout << " ";
        }
        else
        {
        if (alfabet_d.find(zdanie.substr(i,1))>alfabet_d.size())
        {
            cout << alfabet_m.substr(o,1);
        }
        else
        {
            cout << alfabet_d.substr(p,1);
        }
        }
    }
}
