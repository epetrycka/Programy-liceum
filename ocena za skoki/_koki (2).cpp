#include <iostream>

using namespace std;

main()
{
    float a, b, c, d, e;
    cout << "Program wypisuje ocene za styl" << endl;
    cout << "Podaj 1 note: ";
    cin >> a;
    b=a;
    c=a;
    d=a;
    for (int i=2; i<=5; i++)
    {
        cout << "Podaj " << i << " note: ";
        cin >> a;
        c=c+a;
        if (a<b)
        {
            b=a;
        }
        if (a>d)
        {
            d=a;
        }
    }
    c=c-d-b;
    cout << endl << "Noty skrajne " << b << " i " << d;
    cout << endl << "Ocena za styl: " << c;
    return 0;
}
