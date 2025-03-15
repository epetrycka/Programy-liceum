#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
    fstream a, b;
    string k, m;
    int i=0, z=0;
    a.open ("slowa.txt", ios::in);
    b.open ("anagramy.txt", ios::out);
    if (a.good()==false)
    {
        cout << endl << "Plik jest nie dostepny";
    }
    else
    {
        while (!a.eof())
        {
            a >> k;
            a >> m;
            if (k.size()==m.size())
            {
                i=0;
                while (i<=k.size())
                {
                    if (m.find(k[i])<m.size())
                    {
                        m.erase((m.find(k[i])), 1);
                        i++;
                        if (i==k.size())
                        {
                            z=z+1;
                        }
                    }
                    else
                    {
                        i=k.size()+1;
                    }
                }
            }
        }
        b << "Tyle slow z pliku jest anagramami: " << endl << z;
        a.close();
        b.close();
    }
    return 0;
}
