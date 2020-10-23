#include <iostream>
using namespace std;
/* while */
int main() {
    bool b = true;
    int i = 0;
    while (b) {
        i++;
        // break och continue
        /* if ( i > 5) {
             cout << "BREAK" << endl;
             break; // Hoppar ur while-satsen
         } */

        if ( i == 5) {
            cout << "CONTINUE" << endl;
            continue;
        } // Om sant, avbryter här och börjar om
          // på rad rad 7

        cout << "i är nu = " << i << endl;



        if (i == 9) {
            b = false;
        }
    }

    return 0;
}
