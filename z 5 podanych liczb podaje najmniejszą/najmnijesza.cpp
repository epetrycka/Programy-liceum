#include <iostream>

using namespace std;

main()
{
cout << "Porgram podaje najmniejsza z 5 podanych";
int a, b, c, d, e;
cout << endl << "Podaj pierwsza liczbe: ";
cin >> a;
cout << endl << "Podaj druga liczbe: ";
cin >> b;
cout << endl << "Podaj trzecia liczbe: ";
cin >> c;
cout << endl << "Podaj czwarta liczbe: ";
cin >> d;
cout << endl << "Podaj piata liczbe: ";
cin >> e;
if (b<a)
{
a=b;
}
if(c<a)
{
a=c;
}
if(d<a)
{
a=d;
}
if (e<a)
{
a=e;
}
cout << endl << "Najmniejsza liczba z podanych to: " << a;
return 0;
}
