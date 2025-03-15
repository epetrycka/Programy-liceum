#include <iostream>
#include <fstream>
#include <string>

using namespace std;

main()
{
    int i=0;
    string c;
    fstream k;
    k.open ("liczba.txt", ios::in);
    while (!k.eof())
    {
        k >> c;
        while (i<=c.size()/2)
        {
            if (c[i]==c[(c.size()-1)-i])
            {
                i++;
                if(i>c.size()/2)
                {
                    cout << endl << c;
                }
            }
        }
    }
    k.close();
    return 0;
}
