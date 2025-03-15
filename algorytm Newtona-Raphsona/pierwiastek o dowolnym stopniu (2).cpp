#include <iostream>

using namespace std;

double t(double a, int n)
{
    double k=1;
    if (n==0)
    {
        k=1;
    }
    else
    {
        k=a*t(a, n-1);
    }
    return k;
}

main()
{
    double a=1, b, P;
    int n;
    cout << endl << "Podaj stopien pierwiastka: ";
    cin >> n;
    cout << endl << "Podaj liczbe: ";
    cin >> P;
    b=P;
    while (b-a>0.01 ||  b-a>(-0.001))
    {
        //b=(a*(n-1)+P/t(a, n-1))/n;
        b=P/t(a, n-1);
        a=(t(a, n-1)+b)/n;
    }
    cout << endl << b;
}
