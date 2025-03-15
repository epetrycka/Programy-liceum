#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    string n, d;
    int a, b, i;
    fstream x, y;
    x.open ("probka.txt", ios::in);
    y.open ("753.txt", ios::out);
    if (x.good()==false)
    {
        cout << endl << "Plik jest niedostepny";
    }
    else
    {
        while (!x.eof())
        {
            x >> n;
            x >> d;
            for (a=0; a<26; a++)
            {
                for (b=0; b<26; b++)
                {
                    i=0;
                    while (i<n.size())
                    {
                        if (((int(n[i]-97)*a+b)%26)==int(d[i]-97))
                        {
                            i++;
                            if (i==n.size())
                            {
                                y << "Klucz szyfrujacy: (" << a << ", " << b << ")";
                                a=27;
                                b=27;
                            }
                        }
                        else
                        {
                           i=n.size();
                        }
                    }
                }
            }
            for (a=0; a<26; a++)
            {
                for (b=0; b<26; b++)
                {
                    i=0;
                    while (i<n.size())
                    {
                        if (((int(d[i]-97)*a+b)%26)==int(n[i]-97))
                        {
                            i++;
                            if (i==n.size())
                            {
                                y << "  Klucz odszyfrowujacy: (" << a << ", " << b << ")" << endl;
                                a=27;
                                b=27;
                            }
                        }
                        else
                        {
                           i=n.size();
                        }
                    }
                }
            }
        }
    }
}
