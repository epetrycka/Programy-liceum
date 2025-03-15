#include <iostream>

using namespace std;

main()

{
    double m;
    int w[15]={50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5, 2, 1}, p[1000], a;
    cout << endl << "Program do wydawania reszty w zlotych";
    cout << endl << "Podaj kwote (czesci setne podaj po kropce): ";
    cin >> m;
    a=m*100;
    int k=0, i=0;
    while (a>0)
    {
        while (a>=w[k])
        {
            p[i]=w[k];
            i++;
            a-=w[k];
        }
        k++;
    }
    cout << endl << "Reszta ?: ";
    for (int r=0; r<i; r++)
    {
        if (p[r]>=100)
        {
            cout << (p[r]/100)<< "zl + ";
        }
        else
        {
            cout << p[r]<< "gr + ";
        }
    }
    return 0;
}
