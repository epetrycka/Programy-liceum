#include <iostream>
#include <string>
using namespace std;

main()
{
    string k="";
    int n;
    cout << endl << "No wiadomo podaj liczbe: ";
    cin >> n;
    while (n>0)
    {
        if (n%2==0)
        {
            k='0'+k;
        }
        else
        {
            k='1'+k;
        }
        n=n/2;
    }
    cout << endl << "Reprezentacja binarna tej liczby to: " << k;
    return 0;
}
