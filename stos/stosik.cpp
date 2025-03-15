#include <iostream>

using namespace std;

int stos[100], ile=0;

dodaj()
{
    cout << endl << "Dodawanie elementu do stosu.";
    cout << endl << "Podaj liczbe ktora chcesz dodac: ";
    cin >> stos[ile];
    ile++;
}

usun()
{
    cout << endl << "Usuwanie elementu ze stosu.";
    if(ile==0)
    {
        cout << endl << "Stos jest pusty.";
    }
    else
    {
        cout << endl << "Ze stosu usunieto liczbe: " << stos[ile-1];
        ile--;
        cout << endl << "Na stosie pozostalo " << ile << " liczb.";
    }
}

edytuj()
{
    cout << endl << "Edytowanie elementu na stosie.";
    if(ile==0)
    {
        cout << endl << "Stos jest pusty.";
    }
    else
    {
        cout << endl << "Na stosie znajduje sie liczba: " << stos[ile-1];
        cout << endl << "Na jaka liczbe chcesz ja zamienic? ";
        cin >> stos[ile-1];
    }
}

nastosie()
{
    if(ile==0)
    {
        cout << endl << "Stos jest pusty.";
    }
    else
    {
        cout << endl << "Na stosie znajduje sie liczba: " << stos[ile-1];
    }
}

wyczysc()
{
    cout << endl << "Czyszczenie stosu.";
    if(ile==0)
    {
        cout << endl << "Stos jest pusty.";
    }
    else
    {
        cout << endl << "Usuwam nastepujace liczby: ";
        while(ile>0)
        {
            cout << endl << "Usunieto ze stosu liczbe: " << stos[ile-1];
            ile--;
        }
        cout << endl << "Stos jest pusty.";
    }
}

ileliczb()
{
    cout << endl << "Na stosie znajduje sie " << ile << " liczb";
}

int main()
{
    int opcja;
    do
    {
        cout << endl << "Menu:";
        cout << endl << "1 _ Dodaj liczbe do stosu";
        cout << endl << "2 _ Usun liczbe ze stosu";
        cout << endl << "3 _ Edytuj liczbe na stosie";
        cout << endl << "4 _ Wyœwietl co jest na stosie";
        cout << endl << "5 _ Wyczysc stos wyswietlajac jego zawartosc";
        cout << endl << "6 _ Wyswietl ile elementow na stosie";
        cout << endl << "7 _ Zakoncz program";
        cout << endl << "Podaj liczbe z menu: ";
        cin >> opcja;
        switch(opcja)
        {
            case 1: dodaj();
            break;
            case 2: usun();
            break;
            case 3: edytuj();
            break;
            case 4: nastosie();
            break;
            case 5: wyczysc();
            break;
            case 6: ileliczb();
            break;
            case 7: cout << endl << "Do zobaczenia.";
            break;
            default: cout << endl << "Podales zle dane";
            break;
        }
    }while(opcja!=7);
}