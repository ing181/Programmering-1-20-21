#include <iostream>
using namespace std;
/*
1. Skriv ett program som låter användaren mata in 7 tal i ett fält (array) avsett för
datatypen double. Efter inmatningen skall innehållet i fältet matas ut med hjälp av
en while-sats. Talen skall vara åtskilda av ett kommatecken ','. Efter sista talet ska
det inte finnas något kommatecken.
Exempel på utskrift:
1,-3.4,4.44,0.02,-3.5,0.9,-44.5
*/
int main()
{
    // arryen deklareras
    int falt[7];
    // En for-sats för inmatning
    // startvärde: "int i = 0"
    // vilkor: "i<=7"
    // förändring: "i++"
    for ( int i = 0; i < 7; i++ ) {
        cout << "Mata in tal nummer " << i + 1 << " ";
        cin >> falt[i]; // i lika med 0, 1, 2, 3, 4, 5 och 6
    }
    // En while-sats för utmatning (utskrift)
    int j = 0; // Startvärde
    // Vilkor: "j <= 7"
    while ( j < 7 ) {
        if ( j < 6 ) {// "," ska skrivas ut om det inte är sista talet
            cout << falt[j] << ", ";
        }
        else { // Om det är sista talet, inget ","
            cout << falt[j];
        }
        j++; // förändring
    }
    // Tydligare om vi avslutar med en radbrytning
    cout << endl;
    return 0;
}
