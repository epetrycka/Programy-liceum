#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
    int i=0;
    string c;
    fstream k, o;
    k.open ("liczby.txt", ios::in);
    if(k.good()==false)
    {
        cout << "plik jest nie dostepny";
    }
    else
    {
        o.open ("odp.txt", ios::out);
        while (!k.eof())
        {
            k >> c;
            i=0;
            while (i<=c.size()/2)
            {
                if (c[i]==c[(c.size()-1)-i])
                {
                    i++;
                    if(i>c.size()/2)
                    {
                        o << c << endl;
                    }
                }
                else
                {
                    i=c.size();
                }
            }
        }
        o.close();
        k.close();
        return 0;
    }
}
