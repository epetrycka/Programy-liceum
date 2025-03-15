#include <iostream>

using namespace std;

main()
{
    cout << "Program sprawdza czy 5 liczb calkowitych w podanej kolejnosci to ciag rosnacy";
    int a[5];
    for (int i=1; i<=5; i++)
    {
        cout << endl << "Podaj " << i << " liczbe: ";
        cin >> a[i-1];
    }
    for (int w=0; w<5; w++)
    {
        if (a[0]<=a[w])
        {
            a[0]=a[w];
        }
        else
        {
            cout << endl << "To nie jest ciag roasnacy";
            return 0;
        }
    }
    cout << endl << "To jest ciag rosnacy";
    return 0;
}
