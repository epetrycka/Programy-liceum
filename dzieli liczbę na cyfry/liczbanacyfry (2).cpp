#include <iostream>

 using namespace std;

 main ()
 {
     int n;
     cout << "Program dzieli liczbe na cyfry";
     cout << endl << "Podaj liczbe: ";
     cin >> n;
     while (n>0)
     {
         cout << endl << n%10;
         n=n/10;
     }
     return 0;
 }

