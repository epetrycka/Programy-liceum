#include <iostream>
#include <string>

using namespace std;

void Wypisz(int koniec[], int poczatek[], int id[], int k)
{
    cout << "F" << id[k] << ": " << poczatek[k] << "-";
    cout << koniec[k] << endl;
}

void Wybierz(int koniec[], int poczatek[], int id[], int N)
{
    int i, koniec_poprzedniego;
    Wypisz(koniec, poczatek, id, 0);
    koniec_poprzedniego=koniec[0];
    for(i=1; i<N; i++)
    {
        if (poczatek[i] > koniec_poprzedniego)
        {
            Wypisz(koniec, poczatek, id, i);
            koniec_poprzedniego=koniec[i];
        }
    }
}

void Sortuj(int koniec[], int poczatek[], int id[], int N)
{
    int i, j, pom_koniec, pom_poczatek;
    int pom_id;
    for(i=1; i<N; i++)
    {
        pom_koniec=koniec[i];
        pom_poczatek=poczatek[i];
        pom_id=id[i];
        j=i-1;
        while (j>=0 && koniec[j]>pom_koniec)
        {
            koniec[j+1]=koniec[j];
            poczatek[j+1]=poczatek[j];
            id[j+1]=id[j];
            j--;
        }
        koniec[j+1]=pom_koniec;
        poczatek[j+1]=pom_poczatek;
        id[j+1]=pom_id;
    }
}

main()
{
    int N;
    cout << endl << "Podaj ilosc filmow: ";
    cin >> N;
    int P[N], K[N], ID[N];
    for (int i=0; i<N; i++)
    {
        ID[i]=i;
        cout << endl << "Podaj godzine rozpoczecia F" << i << " seansu: ";
        cin >> P[i];
        cout << endl << "Podaj godzine zakonczenia F" << i << " seansu: ";
        cin >> K[i];
    }
    cout << "Harmonogram festiwalu" << endl;
    for(int i=0; i<N; i++)
    {
    Wypisz(K, P, ID, i);
    }
    Sortuj (K, P, ID, N);
    cout << endl << "Filmy po sortowaniu" << endl;
    for (int i=0; i<N; i++)
    {
        Wypisz (K, P, ID, i);
    }
    cout << endl << "Wybrane filmy" << endl;
    Wybierz(K, P, ID, N);
    return 0;
}

