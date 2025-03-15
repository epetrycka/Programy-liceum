#include <iostream>

using namespace std;

main()
{
    int a, g=0, k=1;
    cout << endl << "Program podaje liczbe cyfr potrzebnych do zapisania podanej liczby w systemie binarnym";
    cout << endl << "Podaj liczbe: ";
    cin >> a;
    do
    {
       k=k*2;
       g++;
    } while (k<=a);
    cout << endl << "Do zapisania liczby " << a << " w systemie binarnym potrzeba " << g << " bitow/cyfr";
    return 0;
}
