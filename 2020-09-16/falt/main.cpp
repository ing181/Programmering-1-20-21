#include <iostream>
using namespace std;
int main()
{
    // array med plats f�r 3 st
    // Datatyp: int
    int falt[10000];
     Man kommer �t v�rdena med
     namnet och index
     falt[0] = 6; // tilldelning
     falt[1] = falt[0]; // tilldelning
     falt[2] = 4; // tilldelning
     cout << falt[1] << endl; // v�rdet, 6, skrivs ut p� sk�rmen.
     cout << falt[2] << endl; // 4
    for ( int i = 0; i < 10000; i++ ) {
        falt[i] = i; // Det g�r snabbt att tilldela v�rden. Fr�n 0 till 9999
    }
    for ( int i = 0; i < 10000; i++ ) {
        cout <<  falt[i] << endl;
    }
    // Hitta st�rsta talet
	// Systematskt, funkar alltid
	// Ett exempel p� en algoritm
	// En algoritm �r en motod som alltid leder till l�sningen innom sina givna f�ruts�ttningar.
    int temp = falt[0];
    for ( int i = 1; i < 10000; i++ ) {
        if ( falt[i] > temp ) {  // Om falt[i] �r st�rre �n temp, tilldelas temp det st�rre v�rdet som finns i falt[i]
            temp = falt[i];
        }
    }
    cout << "St�rsta talet i arrayen �r " << temp << endl;
    return 0;
}
