#include <iostream>

using namespace std;

int main()
{
    int n;                                                  //n zmienna okreœlaj¹ca wielkoœæ wielomianu. Jeœli chcemy
    double x, wynik, a[100];                                //zamieniæ liczbê o okreœlonej iloœci bitów jako n podajemy wartoœæ o 1 mniejsz¹.
    cout << "Schemat Hornera" << endl;
    cout << endl << "Podaj wielkosc wielomianu: ";
    cin >> n;
    if (n>=0)                                               //Aby móc liczyæ wielkoœæ wielomianu musi byæ wiêksza lub równa 0
    {
        cout << endl << "Podaj podstawe systemu: ";         //Podstawa systemu. Jeœli chcemy zamieniæ liczbê z systemu dwójkowego podajemy 2
        cin >> x;                                           // Jeœli trójkowego to 3, jeœli czwórkowego to 4, itd.
        for (int i=0; i<=n; i++)
        {
            cout << endl << "Podaj a" << i << ": ";         //Pobieranie w pêtli do tablicy a kolejnych bitów o indeksacji od 0 do n-1
            cin >> a[i];
        }
        wynik=a[0];                                         //nadanie wynikowi wartoœci pocz¹tkowej
        for(int i=1; i<=n; i++)
        {
            wynik=wynik*x+a[i];                             //obliczenia wartoœci wielomianu - przemna¿anie wyniku przez podstawê i dodawanie wyrazu wolnego
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
