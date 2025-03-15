#include <iostream>
#include <string>

using namespace std;

main()
{
    cout << endl << "Program zamienia podana liczbe w systmie 8 na system binarny";
    string k="";
    int a, m;
    cout << endl << "Podaj liczbe: ";
    cin >> a;
    while (a>0)
    {
        m=a%10;
        while (m>0)
        {
            if (m%2==1)
            {
                k='1'+k;
            }
            else
            {
                k='0'+k;
            }
            m=m/2;
        }
        a=a/10;
    }
    cout << endl << "Liczba " << a << " w systemie binarnym to: " << k;
    return 0;
}
