#include <iostream>
#include <string>
#include <cmath>
#include <fstream>

using namespace std;

int wes[1000][2], b, p=0, f=0, h=0;

ifwes(int a)
{
    h=a;
    while(a>0)
    {
        f=pow(a%10,2)+f;
        a=a/10;
    }
    a=f;
    h=f;
    f=0;
    while (f!=1 && f!=h)
    {
        wes[a][1]=1;
        f=0;
        while(a>0)
        {
        f=pow(a%10,2)+f;
        a=a/10;
        }
        a=f;
    }
}

czywes(int a)
{
    h=a;
    while(a>0)
    {
        f=pow(a%10,2)+f;
        a=a/10;
    }
    a=f;
    h=f;
    f=0;
    while (f!=1 && f!=h)
    {
        cout << endl << a;
        f=0;
        while(a>0)
        {
        f=pow(a%10,2)+f;
        a=a/10;
        }
        a=f;
    }
    if (f==1)
    {
        wes[h][1]=1;
        //ifwes(h);

    }
}

main()
{
    for(int i=1; i<=1000; i++)
    {
        wes[i][1]=0;
    }

    for(int i=1; i<=1000; i++)
    {
        if(wes[i][1]==0)
        {
            cout << endl << i;
            czywes(i);
        }
        i++;
    }

}
