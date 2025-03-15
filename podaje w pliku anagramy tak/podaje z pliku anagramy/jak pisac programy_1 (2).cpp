#include <iostream>
#include <string>
#include <fstream>

using namespace std;

main()
{
    fstream a, b;
    string k, m;
    int i=0, z=0;
    a.open ("slowa.txt", ios::in);
    b.open ("anagramy.txt", ios::out);
    cout << "Witajcie kochane dzbany," << endl << "w dzisiejszym odcinku nauczymy sie pisac programy." << endl << "Oto jak napisac program i dowiedziec sie w jakim miejscu jest blad: ";
    if (a.good()==false)
    {
        cout << endl << "Plik jest nie dostepny";
    }
    else
    {
        cout << endl << "Program ";
        while (!a.eof())
        {
            a >> k;
            a >> m;
            cout << endl << "bierze slowa: " << k << " i to " << m;
            if (k.size()==m.size())
            {
                cout << endl << "slowa maja tyle samo liter" << endl << "przystapujemy do szukania literek kolejno z pierwszego slowa w drugim";
                i=0;
                while (i<k.size())
                {
                    cout << endl << "szukamy literek";
                    if (m.find(k[i])<m.size())
                    {
                        cout << endl << "sprawdzilismy literke " << i;
                        m.erase((m.find(k[i])), 1);
                        cout << endl << "znalezlismy literke i usunelismy ja wiec wyglada to tak: " << m;
                        i++;
                        if (i==k.size())
                        {
                            z=z+1;
                            cout << endl << "juz wszystkie literki i git00wa slowa sa anagramami";
                        }
                    }
                    else
                    {
                        cout << endl << "literka " << k[i] << " nie pasi";
                        i=k.size()+1;
                    }
                }
            }
        }
        cout << endl << "O tyle jest anagramami: " << z;
        b << "Tyle slow z pliku jest anagramami: " << endl << z;
        a.close();
        b.close();
    }
    return 0;
}
