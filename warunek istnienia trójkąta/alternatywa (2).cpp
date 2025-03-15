#include <iostream>

using namespace std;

main()
{
    int a, b, c;
    cout << endl << "Program sprawdza warunek istnienia trojkata ale z alternatywa zdan";
    cout << endl << "Podaj dlugosci bokow: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;
    if (!(a<b+c) || !(b<a+c) or !(c<a+b))
    {
        cout << endl << "Taki trojkat nie istnieje";
    }
    else
    {
        cout << endl << "Taki troojkat istnieje";
    }
    return 0;
}
