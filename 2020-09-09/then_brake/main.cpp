#include <iostream>

using namespace std;

int main()
{
    // N�r du vet hur l�nge (hur m�nga varv) while-satsen ska snurra
    // formulerar du vilkoret direkt i while-satsen. "i < 5" i exemplet nedan.
    int i=0;
    while ( i < 5 ) {
        cout << "i=" << i << endl;
        i++;
    }
    i=0;
    // Detta fungerar ocks�. Men undvik detta.
    // R�rigare och "fulare" kod.
    while (true) {

        cout << "i=" << i << endl;
        i++;
        if ( i == 5) {
            break;
        }

    }

        i=0;
        // Vet du inte hur l�nge while-satsen ska snurra p�, �r det
        // l�mpligt med "break".
        char val;
        while (true) {

        cout << "i=" << i << endl;
        i++;

        cout << "V�lj (a) f�r att avsluta" << endl;
        cin >> val;
        if ( val == 'a') {
            break;
        }

    }



    return 0;
}
