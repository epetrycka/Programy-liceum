#include <iostream>
#include <string>

using namespace std;

main()
{
    cout << endl << "Program wypisze reprezentacje binarna liczby podanej w systemie czworkowym";
    string k="";
    int p, m;
    cout << endl << "Podaj liczbe: ";
    cin >> p;
    while (p>0)
    {
        m=p%10;
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
        p=p/10;
    }
    cout << endl << "Reprezentacja binarna tej liczby to: " << k;
    return 0;
}
