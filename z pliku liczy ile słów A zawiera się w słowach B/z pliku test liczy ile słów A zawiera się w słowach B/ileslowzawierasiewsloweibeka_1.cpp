#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    fstream a, b;
    string r, p;
    int z=0, x=0, i;
    a.open ("slowa.txt", ios::in);
    b.open ("tujestodpowiedz.txt", ios::out);
    if (a.good()==false)
    {
        cout << endl << "Plik nie dostepny";
    }
    else
    {
        while (!a.eof())
        {
            a >> r;
            a >> p;
            if (p.size()>=r.size())
            {
                while (p.find(r[0])<p.size())
                {
                    x=p.find(r[0]);
                    i=0;
                    while (i<r.size())
                    {
                        while (r[i]==p[(x+i)])
                        {
                            i++;
                            if (i==(r.size()))
                            {
                                z=z+1;
                                p.erase(0, (p.size()-1));
                            }
                        }
                        i=r.size();
                    }
                    p.erase (0, (x+1));
                }
            }
        }
        b << "Tyle slow z pliku jest w slowie obok: " << endl << z;
        a.close();
        b.close();
        return 0;
    }
}
