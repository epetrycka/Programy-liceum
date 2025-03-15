#include <iostream>

using namespace std;

const int N=9;
const int NOMINALY[N] = {500, 200, 100, 50, 20, 10, 5, 2, 1};

void WydajZlotowki(int reszta)
{
    int i=0;
    while (reszta>0)
    {
        if (reszta >= NOMINALY[i])
        {
            cout << NOMINALY[i] << "zl + ";
            reszta = reszta - NOMINALY[i];
        }
        else
        {
            i++;
        }
    }
}

void WydajGrosze(int reszta)
{
    int i=0;
    while (reszta>0)
    {
        if (reszta >= NOMINALY[i])
        {
            cout << NOMINALY[i]<< "gr + ";
            reszta = reszta - NOMINALY[i];
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int reszta_zlote, reszta_grosze;
    cout << "Podaj liczbe zlotych reszty: ";
    cin >> reszta_zlote;
    cout << "Podaj liczbe groszy reszty: ";
    cin >> reszta_grosze;
    WydajZlotowki(reszta_zlote);
    WydajGrosze(reszta_grosze);
    return 0;
}
