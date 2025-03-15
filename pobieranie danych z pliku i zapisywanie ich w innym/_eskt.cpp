#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;                           //deklaracja zmiennej wskazuj¹cej na plik fizyczny
    plik.open("liczby.txt", ios::in);       //funkcja open ³¹czy zmienn¹ plik z plikiem fizycznym. ios::in do otwarcia. Gdybyœmy chcieli zapisywaæ dane do pliku by³aby opcja ios::out
    int dane[100], i=0;                     //deklaracja tablicy dane gdzie bêdziemy zapisywaæ liczby z pliku oraz deklaracja zmiennej i do poruszania siê po indeksach tablicy
    if(plik.good()==false)                  //funkcja good() sprawdza czy istnieje plik fizycznie. jeœli tak zwraca prawdê, jeœli nie fa³sz i nie ma potrzeby wczytywania danych bo pliku nie ma
    {
        cout << "plik jest nie dostepny";
    }
    else
    {
        while(!plik.eof())                  //pêtla do wczytywania danych z pliku. funkcja eof() end of file zwraca prawdê jeœli dotrzemy do koñca pliku, czyli jak wczytamy wszystkie dane.
        {
            plik >> dane[i];                //strumieñ wejœcia pobiera dane z pliku do spacji i zapisuje do tablicy w miejsce i.
            i++;
        }
    }
    plik.close();                           //zamykamy plik liczby do odczytu (zwalniamy pamiêæ)
    for(int j=0;j<i-1;j++)                    //wypisywanie danych z tablicy dane
    {
        cout << endl << dane[j];
    }
    plik.open("odpowiedz.txt", ios::out);
    for(int j=0;j<i-1;j++)                    //zapisywanie danych z tablicy dane do pliku odpowiedz.txt
    {
        plik << dane[j] << endl;            //wpisywanie poszczególnych danych do pliku (zwróæ uwagê na kierunek operatora <<
    }
    plik.close();                           //zamykamy plik odpowiedz do zapisu (zwalniamy pamiêæ)
    return 0;
}
