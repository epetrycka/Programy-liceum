#include <iostream>

using namespace std;

double e, q[100];
int n;

double w(double x)
{
    double y=1, c=0;
    for (int k=n; k>=0; k--)
    {
        y=1;
        for (int g=k; g>0; g--)
        {
            y=y*x;
        }
        y=y*q[k];
        c=c+y;
    }
    return c;
}

main()
{
    double a, b, c;
    cout << "Program obliczy przyblizone miejsce zerowe funkcji ciaglej o jednym miejscu zerowym w przedziale";
    cout << endl << "Podaj przyblizenie e: ";
    cin >> e;
    cout << endl << "Podaj stopien wielomianu: ";
    cin >> n;
    for (int k=n; k>=0; k--)
    {
        cout << endl << "Podaj a" << k << ": ";
        cin >> q[k];
    }
    cout << endl << "Podaj liczby a i b z przedzialu <a,b>";
    cout << endl << "Podaj a: ";
    cin >> a;
    cout << endl << "Podaj b: ";
    cin >> b;
    if ((w(a)<0 && w(b)>0) || (w(a)>0 && w(b)<0)) //w(a)*w(b)<0
    {
        while (b-a>e)
        {
            c=((b+a)/2);
            if (w(c)==0)
            {
                a=c;
                b=c;
            }
            else
            {
                if (w(a)*w(c)<0)
                {
                    b=c;
                }
                if (w(c)*w(b)<0)
                {
                    a=c;
                }
            }
        }
        cout << endl << "Przyblizone miejsce zerowe to: " << ((b+a)/2);
    }
    else
    {
        if (w(a)==0)
        {
            cout << endl << "Miejsce zerowe: " << a;
        }
        else
        {
            if (w(b)==0)
            {
                cout << endl << "Miejsce zerowe: " << b;
            }
            else
            {
                cout << endl << "W przedziale funkcja nie przecina osi OX w jednym punkcie";
            }
        }
    }
    return 0;
}
