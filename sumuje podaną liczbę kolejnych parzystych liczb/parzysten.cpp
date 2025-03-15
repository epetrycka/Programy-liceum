#include <iostream>

using namespace std;

main()
{
    int k, z=0;
    cout << endl << "Program sumuje podana liczbe kolejnych liczb parzystych";
    cout << endl << "Podaj ile liczb ma zsumowac program: ";
    cin >> k;
    for (int i=0; i<=k; i++)
    {
        z=z+(i*2);
    }
    cout << endl << "Wynik to: " << z;
    return 0;
}
