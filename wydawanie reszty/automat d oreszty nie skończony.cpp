#include <iostream>

using namespace std;

const int n[9]={500, 200, 100, 50, 20, 10, 5, 2, 1};

void reszta(double p, double c)
{
    int k=c*100, w=p*100, r, i;
    r=(w-k);
    cout << endl << "Twoja reszta: ";
    i=0;
    while (r>=100)
    {
        while (r>=(n[i]*100))
        {
            cout << n[i] << "zl + ";
            r=(r-n[i]*100);
        }
        i++;
    }
    i=0;
    while (r>0)
    {
        while (r>=n[i])
        {
            cout << n[i] << "gr + ";
            r=(r-n[i]);
        }
        i++;
    }
}

main()
{
    double p;
    cout << endl << "Automat dworcowy wydaje reszte za zakupione produkty najmniejsza mozliwa liczba nominalow";
    cout << endl << "Wpisz jakie monety wrzucasz do automatu wraz z nominalem (np. 5zl lub 20gr) i napisz start: " << endl;
    cin >> p;
    while ()
    cout << endl << "Kwota wrzucona do automatu: " << p << "zl";
    int o;
    cout << endl << "Wybierz produkt z listy wpisujac jego liczbe:";
    cout << endl << "1 - woda, cena: 2,20zl";
    cout << endl << "2 - herbata, cena: 3,02zl";
    cout << endl << "3 - przekaska, cena: 4,12zl";
    cout << endl << "4 - produkt za cene: 7,02zl";
    cout << endl << "5 - zaden z listy (sam wpisuje cene)" << endl;
    cin >> o;
    double c;
    if (o==5)
    {
        cout << endl << "Podaj cene produktu (grosze napisz po kropce): ";
        cin >> c;
        reszta(p, c);
    }
    else
    {
         switch (o)
         {
             case 1: c=2.20;
             reszta(p,c);
             break;
             case 2: c=3.02;
             reszta(p,c);
             break;
             case 3: c=4.12;
             reszta(p,c);
             break;
             case 4: c=7.02;
             reszta(p,c);
             break;
            default: cout << endl << "Nie ma takiego produktu";
         }
    }
    return 0;
}
