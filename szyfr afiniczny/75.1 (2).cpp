#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
    fstream x, z;
    string k;
    z.open ("751.txt", ios::out);
    x.open ("tekst.txt", ios::in);
    if (x.good()==false)
    {
        cout << endl << "Plik jest nie dostepny";
    }
    else
    {
        getline(x, k);
        while (k.find(" ")<16)
        {
            if (k[0]=='d' && k[(k.find(" ")-1)]=='d')
            {
                z << endl << (k.substr(0, (k.find(" "))));
                cout << endl << k.substr(0, (k.find(" ")));
            }
            k.erase(0, (k.find(" ")+1));
        }
        if (k[0]=='d' && k[(k.size())-1]=='d')
        {
            z << endl << (k.substr(0, (k.size())));
            cout << endl << k.substr(0, (k.size()));
        }
    }
}
