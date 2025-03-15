#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
        fstream z, y;
        string x="";
        int i;
        y.open ("752.txt", ios::out);
        z.open("tekst.txt", ios::in);
        if (z.good()==false)
        {
            cout << endl << "Plik nie dostepny";
        }
        else
        {
            while (!z.eof())
            {
                z >> x;
                i=0;
                if (x.size()>=10)
                {
                while (i<x.size())
                {
                    if (int(x[i])<97)
                    {
                        y << x[i];
                    }
                    else
                    {
                        y << char(((((int(x[i])-97)*5)+2)%26)+97);
                    }
                    i++;
                }
                y << endl;
                }
            }
        }
}
