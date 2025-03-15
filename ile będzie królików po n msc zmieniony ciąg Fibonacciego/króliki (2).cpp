#include <iostream>

using namespace std;

main()
{
    cout << "Zmieniony ciag Fibonacciego";
    cout << endl << "Zasady rozmnazania sie krolikow:";
    cout << endl << "*na poczatku rodza sia dwie pary krolikow,";
    int s=2;
    cout << endl << "*kazda nowonarodzona para krolikow staje sie plodna po dwoch miesiacach zycia,";
    cout << endl << "*kazda plodna para krolikow rodzi co miesiac dwie pary potomstwa,";
    int dc=3, p=2;
    cout << endl << "*kroliki nie umieraja.";
    cout << endl << "Ile par krolikow bedzie po n miesiacach?";
    cout << endl << "Podaj n: ";
    int n, a[10000];
    cin >> n;
    for (int i=0; i<dc; i++)
    {
        a[i]=s;
    }
    for (int k=dc; k<=n; k++)
    {
        a[k]=((p*a[k-dc])+a[k-1]);
    }
    for (int w=0; w<=n; w++)
    {
        cout << a[w] << ", ";
    }
    cout << endl << "Po " << n << " miesiacach bedzie " << a[n] << " par(a/y) krolikow";
    return 0;
}
