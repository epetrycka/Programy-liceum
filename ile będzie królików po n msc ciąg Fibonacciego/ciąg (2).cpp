#include <iostream>

using namespace std;

long long int f(int n)
{
    long long int a=1, b=1, o;
    for (int i=2; i<=n; i++)
    {
        o=a+b;
        a=b;
        b=o;
    }
    return o;
}

main()
{
    int n;
    cout << "Program podaje ile bedzie par krolikow po n miesiacach";
    cout << endl << "Podaj n: ";
    cin >> n;
    cout << endl << "Po " << n << " miesiacach bedzie: " << f(n) << " par krolilow.";
    return 0;
}
