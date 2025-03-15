#include <iostream>

using namespace std;

int main()
{
    int n;                                                  //n zmienna okre�laj�ca wielko�� wielomianu. Je�li chcemy
    double x, wynik, a[100];                                //zamieni� liczb� o okre�lonej ilo�ci bit�w jako n podajemy warto�� o 1 mniejsz�.
    cout << "Schemat Hornera" << endl;
    cout << endl << "Podaj wielkosc wielomianu: ";
    cin >> n;
    if (n>=0)                                               //Aby m�c liczy� wielko�� wielomianu musi by� wi�ksza lub r�wna 0
    {
        cout << endl << "Podaj podstawe systemu: ";         //Podstawa systemu. Je�li chcemy zamieni� liczb� z systemu dw�jkowego podajemy 2
        cin >> x;                                           // Je�li tr�jkowego to 3, je�li czw�rkowego to 4, itd.
        for (int i=0; i<=n; i++)
        {
            cout << endl << "Podaj a" << i << ": ";         //Pobieranie w p�tli do tablicy a kolejnych bit�w o indeksacji od 0 do n-1
            cin >> a[i];
        }
        wynik=a[0];                                         //nadanie wynikowi warto�ci pocz�tkowej
        for(int i=1; i<=n; i++)
        {
            wynik=wynik*x+a[i];                             //obliczenia warto�ci wielomianu - przemna�anie wyniku przez podstaw� i dodawanie wyrazu wolnego
        }
        cout << endl << "Liczba: ";                         //wypisywanie wyniku
        for(int i=0;i<=n;i++)
        {
            cout << a[i];
        }
        cout << " zapisana w systemie " << x << " wynosi: " << wynik << " w systemie 10";
    }
    else
    {
        cout << endl << "Zla wartosc";
    }
}
