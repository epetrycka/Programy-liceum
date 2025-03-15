#include <iostream>
#include <string>

using namespace std;

main()
{
    string napis = "To jest napis";
    cout << "1. Napis: " << napis << endl;
    cout << "2. Dlugosc napisu to (metoda size): " << napis.size() << endl;
    cout << "3. Dlugosc napisu to (metoda length): " << napis.length() << endl;
    //laczenie tekstów
    napis += " dodatek";
    napis.append( " dodatek" );
    cout << "4. " << napis << endl;
    napis.erase( 13, 16 ); //Kasujemy od dziesietej pozycji (czyli jedenastego znaku) czternaœcie znaków
    cout << "5. " << napis << endl;
    string druginapis;
    druginapis.insert( 0, napis ); //Wstaw przed pozycje zero tekst z obiektu napis
    cout << "6. " << druginapis << endl;
    if(napis==druginapis)
    {
        cout << "7. Napisy sa takie same." << endl;
    }
    string fragment;
    fragment.insert( 0, napis, 1, 8 );
    cout << "8. " << fragment << endl;
}
