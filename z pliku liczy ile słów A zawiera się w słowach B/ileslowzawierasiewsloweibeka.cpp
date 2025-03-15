#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    string k, s;
    int p=0, z=0, i=0;
    fstream a, b;
    a.open ("slowa.txt", ios::in);
    b.open ("kk.txt", ios::out);
    if (a.good()==false)
    {
        cout << "Plik nie dostepny";
    }
    else
    {
        while (!a.eof())
        {
            a >> k;
            a >> s;
            if (s.size()>=k.size())
            {
                cout << endl << "niedziala1";
                while (s.find(k[0])<s.size())
                {
                    cout << endl << "niedziala2";
                    //if (s.find(k[0])<s.size())
                    {
                        cout << endl << "niedziala3";
                        p=s.find(k[0]);
                        i=0;
                        while (i<k.size())
                        {
                            cout << endl << "niedziala4";
                                if (k[i]==s[p+i])
                                {
                                    cout << endl << "niedziala5";
                                    i++;
                                    if (i=k.size())
                                    {
                                        cout << endl << "niedziala6";
                                        z=z+1;
                                        i++;
                                    }
                                }
                        }

                    }
                    s.erase(0, i);
                }
            }
        }
        cout << endl << z;
        return 0;
    }
}
