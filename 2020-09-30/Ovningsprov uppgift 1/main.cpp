#include <iostream>
using namespace std;
/*
1. Skriv ett program som l�ter anv�ndaren mata in 7 tal i ett f�lt (array) avsett f�r
datatypen double. Efter inmatningen skall inneh�llet i f�ltet matas ut med hj�lp av
en while-sats. Talen skall vara �tskilda av ett kommatecken ','. Efter sista talet ska
det inte finnas n�got kommatecken.
Exempel p� utskrift:
1,-3.4,4.44,0.02,-3.5,0.9,-44.5
*/
int main()
{
    // arryen deklareras
    int falt[7];
    // En for-sats f�r inmatning
    // startv�rde: "int i = 0"
    // vilkor: "i<=7"
    // f�r�ndring: "i++"
    for ( int i = 0; i < 7; i++ ) {
        cout << "Mata in tal nummer " << i + 1 << " ";
        cin >> falt[i]; // i lika med 0, 1, 2, 3, 4, 5 och 6
    }
    // En while-sats f�r utmatning (utskrift)
    int j = 0; // Startv�rde
    // Vilkor: "j <= 7"
    while ( j < 7 ) {
        if ( j < 6 ) {// "," ska skrivas ut om det inte �r sista talet
            cout << falt[j] << ", ";
        }
        else { // Om det �r sista talet, inget ","
            cout << falt[j];
        }
        j++; // f�r�ndring
    }
    // Tydligare om vi avslutar med en radbrytning
    cout << endl;
    return 0;
}
