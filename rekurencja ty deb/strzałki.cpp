#include <iostream>

using namespace std;


int rysuj(int x, int y)
{
    if (2*x==y || 2*x+1==y)
    {
        cout << endl << "wtf";
        return y;
    }
    else
    {
        if (2*x<=y)
        {
            //cout << endl << 2*x;
            rysuj(2*x, y);
        }
        if (2*x+1<=y)
        {
            //cout << endl << 2*x+1;
            rysuj (2*x+1, y);
        }
        return x;
    }
}

main()
{
    cout << endl << "co: " << rysuj(2, 11);
}
