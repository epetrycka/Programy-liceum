#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    fstream a, b;
    string k, c;
    int z, w, r=0, t;
    a.open ("slowa2.txt", ios::in);
    b.open ("odpowiedz.txt", ios::out);
    if (a.good()==false)
    {
        cout << endl << "Plik nie dostepny";
    }
    else
    {
        while (!a.eof())
        {
            a >> k;
            a >> c;
            if (k.size()==c.size())
            {
                z=0;
                w=0;
                for (int i=0; i<k.size(); i++)
                {
                    z=z+int((k[i]));
                    w=w+int((c[i]));
                }
                if (z==w)
                {
                    for (int g=1; g<k.size(); g++)
                    {
                        for (int f=0; f<(k.size()-g); f++)
                        {
                            if (int(k[f])<int(k[f+1]))
                            {
                                t=k[f];
                                k[f]=k[f+1];
                                k[f+1]=t;
                            }

                        }
                    }
                    for (int g=1; g<c.size(); g++)
                    {
                        for (int f=0; f<(c.size()-g); f++)
                        {
                            if (int(c[f])<int(c[f+1]))
                            {
                                t=c[f];
                                c[f]=c[f+1];
                                c[f+1]=t;
                            }

                        }
                    }
                    if (k==c)
                    {
                        r=r+1;
                        cout << endl << k << "  i  " << c;
                    }
                }
            }
        }
        cout << endl << r;
        b << "Tyle slow z pliku jest anagramami: " << endl << r;
    }
    a.close();
    b.close();
    return 0;
}
