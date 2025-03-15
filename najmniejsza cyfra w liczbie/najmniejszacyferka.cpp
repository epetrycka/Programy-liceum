#include <iostream>
#include <string>

using namespace std;

main()
{
    string n;
    cout << "Program wypisuje najmniejsza cyfre z podanej liczby";
    cout << endl << "Podaj liczbe: ";
    cin >> n;
    int i=0;
    while (i<=n.size())
    {
        if (n[0]<n[i])
        {
            n[0]=n[i];
        }
        i++;
    }
    cout << endl << "Najwieksza cyfra w podanej liczbie to " << n[0];
    return 0;
}
