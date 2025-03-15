#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;                           //deklaracja zmiennej wskazuj�cej na plik fizyczny
    plik.open("liczby.txt", ios::in);       //funkcja open ��czy zmienn� plik z plikiem fizycznym. ios::in do otwarcia. Gdyby�my chcieli zapisywa� dane do pliku by�aby opcja ios::out
    int dane[100], i=0;                     //deklaracja tablicy dane gdzie b�dziemy zapisywa� liczby z pliku oraz deklaracja zmiennej i do poruszania si� po indeksach tablicy
    if(plik.good()==false)                  //funkcja good() sprawdza czy istnieje plik fizycznie. je�li tak zwraca prawd�, je�li nie fa�sz i nie ma potrzeby wczytywania danych bo pliku nie ma
    {
        cout << "plik jest nie dostepny";
    }
    else
    {
        while(!plik.eof())                  //p�tla do wczytywania danych z pliku. funkcja eof() end of file zwraca prawd� je�li dotrzemy do ko�ca pliku, czyli jak wczytamy wszystkie dane.
        {
            plik >> dane[i];                //strumie� wej�cia pobiera dane z pliku do spacji i zapisuje do tablicy w miejsce i.
            i++;
        }
    }
    plik.close();                           //zamykamy plik liczby do odczytu (zwalniamy pami��)
    for(int j=0;j<i-1;j++)                    //wypisywanie danych z tablicy dane
    {
        cout << endl << dane[j];
    }
    plik.open("odpowiedz.txt", ios::out);
    for(int j=0;j<i-1;j++)                    //zapisywanie danych z tablicy dane do pliku odpowiedz.txt
    {
        plik << dane[j] << endl;            //wpisywanie poszczeg�lnych danych do pliku (zwr�� uwag� na kierunek operatora <<
    }
    plik.close();                           //zamykamy plik odpowiedz do zapisu (zwalniamy pami��)
    return 0;
}
