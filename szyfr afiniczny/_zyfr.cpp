#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
        cout << endl << "Program szyfruje teskt szyfrem afirycznym.";
        cout << endl << "Kluczem szyfrujacym sa dwie liczby calkowite A i B.";
        cout << endl << "Kazda litera w alfabecie zastapiona jest liczba od 0 do 25.";
        cout << endl << "Potem liczbe odpowiadajaca literze mnozymy przez A i dodajemy do B oraz wypisujemy litere odpowiadajaca wynikowi.";
        fstream z, y;
        string x;
        int a, b, i=0;
        y.open ("wynik.txt", ios::out);
        z.open("probka.txt", ios::in);
        if (z.good()==false)
        {
            cout << endl << "Plik nie dostepny";
        }
        else
        {
            cout << endl << "Podaj a: ";
            cin >> a;
            cout << endl << "Podaj b: ";
            cin >> b;
            while (!z.eof())
            {
                i=0;
                x="";
                getline(z, x);
                while (i<x.size())
                {
                    if (int(x[i])<97)
                    {
                        y << x[i];
                    }
                    else
                    {
                        y << char(((((int(x[i])-97)*a)+b)%26)+97);
                    }
                    i++;
                }
                y << endl;
            }
        }
}
