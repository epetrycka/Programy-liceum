#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
    int z=0;
    string w;
    fstream a, b;
    a.open ("slowa.txt", ios::in);
    b.open ("tyle slow z pliku konczy sie na A.txt", ios::out);
    if (a.good()==false)
    {
        cout << endl << "Plik nie dostepny";
    }
    else
    {
        while (!a.eof())
        {
            a >> w;
            if (w[(w.find(" ")-1)]=='A')
            {
                z=z+1;
            }
            if (w[(w.size()-1)]=='A')
            {
                 z=z+1;
            }
        }
        b << "Tyle słów z pliku kończy się na 'A': " << endl << z;
        a.close();
        b.close();
    }
    return 0;
}
