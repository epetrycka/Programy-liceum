#include <iostream>

using namespace std;

main ()
{
    cout << "Program podaje najwieksza, zakonczona zerem z podanych liczb";
    int i=0, a[5], m;
    for (int i=0; i<=5; i++)
    {
        cout << endl << "Podaj liczbe: ";
        cin >> a[i];
    }
    for (int i=0; i<=5; i++)
    {
            if (a[i]>a[i+1] && a[i]%10==0)
            {
                m=a[i];
            }
    }
    if (m!=0)
    {
       cout << endl << "Najwieksza liczba zakonczona zera z podanych to: " << m;
    }
    else
    {
        cout << endl << "Nie ma takiej liczby";
    }
}
