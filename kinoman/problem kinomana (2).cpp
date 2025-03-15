#include <iostream>
#include <string>

using namespace std;

int N=10;

void Wypisz(int koniec[], int poczatek[], string id[], int k)
{
    cout << id[k] << ": " << poczatek[k] << "-";
    cout << koniec[k] << endl;
}

void Wybierz(int koniec[], int poczatek[], string id[])
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

void Sortuj(int koniec[], int poczatek[], string id[])
{
    int i, j, pom_koniec, pom_poczatek;
    string pom_id;
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
    int P[N]={9, 16, 15, 18, 14, 10, 10, 13, 15, 18};
    int K[N]={10, 17, 17, 21, 15, 14, 11, 14, 17, 20};
    string ID[N]={"F0", "F1", "F2", "F3", "F4", "F5", "F6", "F7", "F8", "F9"};
    cout << "Harmonogram festiwalu" << endl;
    for(int i=0; i<N; i++)
    {
    Wypisz(K, P, ID, i);
    }
    Sortuj (K, P, ID);
    cout << endl << "Filmy po sortowaniu" << endl;
    for (int i=0; i<N; i++)
    {
        Wypisz (K, P, ID, i);
    }
    cout << endl << "Wybrane filmy" << endl;
    Wybierz(K, P, ID);
    return 0;
}
