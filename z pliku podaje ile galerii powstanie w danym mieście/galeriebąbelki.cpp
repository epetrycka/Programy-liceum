#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    fstream x, y;
    string a, b[1000], f;
    int k=0, j=1;
    x.open ("galerie.txt", ios::in);
    y.open ("4_1.txt", ios::out);
    if (x.good()==false)
    {
        cout << endl << "Plik nie dostepny";
    }
    else
    {
        while (!x.eof())
        {
            getline(x, a);
            a.erase((a.find(" ")), (a.size()-a.find(" ")));
            b[k]=a;
            k++;
        }
        for (int p=k; p>=0; p--)
        {
            for (int i=0; p>i+1; i++)
            {
                if (b[i]>b[i+1])
                {
                    f=b[i];
                    b[i]=b[i+1];
                    b[i+1]=f;
                }
            }
        }
        for (int w=0; w<k; w++)
        {
            if (b[w]==b[w+1])
            {
                j++;
            }
            else
            {
                y << b[w] << " " << j << endl;
                j=1;
            }
        }
    }
    x.close();
    y.close();
    return 0;
}
