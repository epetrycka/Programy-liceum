#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main ()
{
    int i=0, m;
    string a;
    fstream k, o;
    k.open ("liczby.txt", ios::in);
    if (k.good()==false)
    {
        cout << "plik nie jest dostepny";
    }
    else
    {
        o.open ("palindrom.txt", ios::out);
        while (!k.eof())
        {
            k >> a;
            for (int i=0; i<(a.size()/2); i++)
            {
                if(a[0+i]=a[(a.size()-1)-i] || a.size()==1)
                {
                    o << a << endl;
                }
            }
        }
        o.close();
        k.close();
    }
}
