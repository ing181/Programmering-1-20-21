#include <iostream>
using namespace std;
int main()
{
    // array med plats för 3 st
    // Datatyp: int
    int falt[10000];
     Man kommer åt värdena med
     namnet och index
     falt[0] = 6; // tilldelning
     falt[1] = falt[0]; // tilldelning
     falt[2] = 4; // tilldelning
     cout << falt[1] << endl; // värdet, 6, skrivs ut på skärmen.
     cout << falt[2] << endl; // 4
    for ( int i = 0; i < 10000; i++ ) {
        falt[i] = i; // Det går snabbt att tilldela värden. Från 0 till 9999
    }
    for ( int i = 0; i < 10000; i++ ) {
        cout <<  falt[i] << endl;
    }
    // Hitta största talet
	// Systematskt, funkar alltid
	// Ett exempel på en algoritm
	// En algoritm är en motod som alltid leder till lösningen innom sina givna förutsättningar.
    int temp = falt[0];
    for ( int i = 1; i < 10000; i++ ) {
        if ( falt[i] > temp ) {  // Om falt[i] är större än temp, tilldelas temp det större värdet som finns i falt[i]
            temp = falt[i];
        }
    }
    cout << "Största talet i arrayen är " << temp << endl;
    return 0;
}
