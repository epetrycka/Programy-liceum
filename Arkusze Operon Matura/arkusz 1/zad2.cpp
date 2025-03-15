#include <iostream>
#include <cmath>
#include <string>
#include <fstream>

using namespace std;
int fibonaci(int k)
{
    if (k=1)
    {
        return f1;
    }
    else
    {
        if (k=2)
        {
            return f2;
        }
        else
        {
            return (fibonaci(k-1)+fibonaci(k-2));
        }
    }
}

main()
{
    int f1, f2;
    cin >> f1;
    cin >> f2;
    string a;
    cin >> a;
    int k=0;
    while (k<a.size())
    {
        cout << char(((fibonaci(k+1)%26)+int(a[k])-65)%26+65);
        k++;
    }
    cout << endl << "OK: " << 'A';
}
