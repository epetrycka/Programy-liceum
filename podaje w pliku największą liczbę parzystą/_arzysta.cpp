#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream plik;
    plik.open("liczby.txt", ios::in);
    int dane[1000], i=0;
    if(plik.good()==false)
    {
        cout << "plik jest nie dostepny";
    }
    else
    {
        while(!plik.eof())
        {
            plik >> dane[i];
            i++;
        }
    }
    plik.close();
    plik.open("wynik5.txt", ios::out);
    for(int j=0;j<i-1;j++)
    {
            if (dane[0]<dane[j]&& dane[j]%2==0)
            {
                dane[0]=dane[j];
            }
    }
    plik << dane[0] << endl;
    plik.close();
    return 0;
}
