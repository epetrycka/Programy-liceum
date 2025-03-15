#include <iostream>

using namespace std;

main()
{
    int k[10], p=0, g;
    cout << endl << "Program podaje najmniejszy i najwiekszy element z podanych 10 liczb";
    for (int i=0; i<10; i++)
    {
        cout << endl << "Podaj liczebke: ";
        cin >> k[i];
    }
    cout << endl << "Dziena";
    while (p<10)
    {
        for (int j=0; j<9-p; j++)
        {
            if (k[j]>k[j+1])
            {
                g=k[j];
                k[j]=k[j+1];
                k[j+1]=g;
            }
        }
        p++;
    }
    cout << endl << "Najmniejsza liczba to: " << k[0];
    cout << endl << "Najwieksza liczba to: " << k[9];
    return 0;
}
