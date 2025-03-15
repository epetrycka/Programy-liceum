#include <iostream>

using namespace std;

main ()
{
    int n, i=0;
    cout << "Program sumuje cyfry liczby calkowitej dodatniej" <<
    endl << "Podaj liczbe: ";
    cin >> n;
    if (n<0)
    {
        cout << endl << "Zle dane";
    }
    else
    {
        while (n>0)
        {
            i=(i+(n%10));
            n=n/10;
        }
    cout << endl << "Suma cyfr danej liczby wynosi: " << i;
    }
    return 0;
}
