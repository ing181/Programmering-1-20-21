#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // Arrayer for-satser
	// 
    double tal[3];
    double tilldelning = 1.01;
	// Utan loop (for- eller while sats) behövs mycket kod
    int i = 0;
    tilldelning = tilldelning * tilldelning;
    tal[i] = tilldelning;
    i++;
    tilldelning = tilldelning * tilldelning;
    tal[i] = tilldelning;
    i++;
    tilldelning = tilldelning * tilldelning;
    tal[i] = tilldelning;

    // Utskrift med while sats
    int j = 0;
    while ( j < 3 ) {
    cout << "med forsats " << tal[j] << endl;
    j++;
    }

    // Med forsats behövs inte så mycket kod
    tilldelning = 1.01;
    for ( int i = 0; i < 3; i++ ) {
        tilldelning = tilldelning * tilldelning;
        tal[i] = tilldelning;
    }
	// Utskrift utan while sats
    cout << "utan forsats " << tal[0] << endl;
    cout << "utan forsats " << tal[1] << endl;
    cout << "utan forsats " << tal[2] << endl;
    return 0;
}

