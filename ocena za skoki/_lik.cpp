#include <iostream>

using namespace std;

int main()
{
    float nota,mini,maks,suma;

    cout<<"WprowadŸ noty za skok"<<endl;
    cin>>nota;
    mini=nota;
    maks=nota;
    suma=nota;

    for (int i=1; i<=4; i++)
    {
        cin>>nota;
        suma=suma+nota;
        if (nota<mini) mini=nota;
        if (nota>maks) maks=nota;
    }

    suma=suma-mini-maks;
    cout<<"Noty skrajne: "<<mini;
    cout<<" i "<<maks<<endl;
    cout<<"Nota za skok: "<<suma<<endl;

    return 0;
}
