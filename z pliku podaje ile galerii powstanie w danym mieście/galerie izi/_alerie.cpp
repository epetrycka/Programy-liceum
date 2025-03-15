#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    fstream x, z;
    string a, f[1000];
    int p=0, w=0, t[1000], s;
    x.open ("galerie_przyklad.txt", ios::in);
    z.open ("4_1_przyklad.txt", ios::out);
    if (x.good()==false)
    {
        cout << endl << "Plik nie dostepny";
    }
    else
    {
        while (!x.eof())
        {
            getline(x,a);
            f[p].insert(0, a, 0, (a.find(" ")));
            t[p]=1;
            w=p-1;
            while (w>=0)
            {
                if (f[w]==f[p])
                {
                    t[w]++;
                    f[p].clear();
                    p--;
                    w=-1;
                }
                w--;
            }
            p++;
        }
        w=0;
        while (w<p)
        {
            z << f[w] << " " << t[w] << endl;
            w++;
        }
    }
    x.close();
    z.close();
    return 0;
}
