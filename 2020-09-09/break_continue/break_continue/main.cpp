#include <iostream>

using namespace std;

int main()
{
    int tal = 0;
    /*
    while ( true ) {
        cout << "Sant " << tal << endl;
        tal++;
        if ( tal == 10 ) {
            break; // Hoppar ur while-satsen
        }
    }
    */
    while ( true ) {
        tal++;
        if ( tal == 10 ) {
            continue; // Hoppar ur while-satsen h�r
                      // och b�rjar fr�n b�rjan igen.
                      // Hoppar ur p�g�ende varv
        }

             cout << "Sant " << tal << endl;

        if ( tal == 15 ) {
            break; // Hoppar ur while-satsen helt o h�llet
        }


    }
    // Efter break
    return 0;
}
