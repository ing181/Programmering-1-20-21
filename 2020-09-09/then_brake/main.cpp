#include <iostream>

using namespace std;

int main()
{
    // När du vet hur länge (hur många varv) while-satsen ska snurra
    // formulerar du vilkoret direkt i while-satsen. "i < 5" i exemplet nedan.
    int i=0;
    while ( i < 5 ) {
        cout << "i=" << i << endl;
        i++;
    }
    i=0;
    // Detta fungerar också. Men undvik detta.
    // Rörigare och "fulare" kod.
    while (true) {

        cout << "i=" << i << endl;
        i++;
        if ( i == 5) {
            break;
        }

    }

        i=0;
        // Vet du inte hur länge while-satsen ska snurra på, är det
        // lämpligt med "break".
        char val;
        while (true) {

        cout << "i=" << i << endl;
        i++;

        cout << "Välj (a) för att avsluta" << endl;
        cin >> val;
        if ( val == 'a') {
            break;
        }

    }



    return 0;
}
