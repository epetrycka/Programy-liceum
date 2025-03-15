#include <iostream>
#include <cmath>

using namespace std;

main()
{
    double p;
    cout << endl << "Podaj liczbe, z ktorej program obliczy przyblizony pierwiastek kwadratowy: ";
    cin >> p;
    double a=p/2, b=2;
    while (abs(a-b)>=0.000001)
    {
        a=(a+b)/2;
        b=p/a;
    }
    cout << endl << "Pierwiastek z liczby " << p << " wynosi: " << a;
}
