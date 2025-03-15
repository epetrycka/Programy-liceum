#include <iostream>

using namespace std;

main()
{
    int a[5];
    cout << "Program wypisuje najmniejsza liczbe z 5 podanych";
    for (int i=1; i<6; i++)
    {
        cout << endl << "Podaj " << i << " liczbe: ";
        cin >> a[i-1];
    }
    for (int w=0; w<5; w++)
    {
        if (a[0]>a[w])
        {
            a[0]=a[w];
        }
    }
    cout << endl << "Najmniejsza jest: " << a[0];
    return 0;
}
