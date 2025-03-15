#include <iostream>

using namespace std;

const int n[9]={500, 200, 100, 50, 20, 10, 5, 2, 1}

void woda(double p)
{
    double c;
    int k=c*100, w=p*100, r;
    r=(w-k);
    cout << endl << "Twoja reszta: ";
    for (int i=0; r>=100; i++)
    {
        if (r>(n[i]*100))
        {
            cout << n[i] << "zl + ";
            r=(r-n[i]);
        }
    }
    for (int i=0; r>0; i++)
    {
        if (r>n[i])
        {
            cout << n[i] << "gr + ";
            r=(r-n[i]);
        }
    }
}

main()
{
    double p=10;
    cout << endl << "Automat dworcowy wydaje reszte za zakupione produkty najmniejsza mozliwa liczba nominalow";
    cout << endl << "Kwota wrzucona do automatu: " << p;
    int o;
    cout << endl << "Wybierz produkt z listy wpisując jego liczbe:";
    cout << endl << "1 - woda, cena: 2,20zl";
    cout << endl << "2 - herbata, cena: 3,02zl";
    cout << endl << "3 - przekaska, cena: 4,12zl";
    cout << endl << "4 - produkt za cene: 7,02zl";
    cout << endl << "5 - zaden z listy (sam wpisuje cene)";
    cin >> o;
    if (o=5)
    {
        double c;
        cout << endl << "Podaj cene produktu: ";
        cin >> c;
        inny(p, c);
    }
    else
    {
         switch (o)
         {
             case 1: woda(p);
             break;
             case 2: herbata(p);
             break;
             case 3: przekaska(p);
             break;
             case 4: produkt(p);
             break;
            default: cout << endl << "Nie ma takiego produktu";
         }
    }
}