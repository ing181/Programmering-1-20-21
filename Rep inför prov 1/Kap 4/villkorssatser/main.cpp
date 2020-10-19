#include <iostream>
using namespace std;
/* villkorssatser
if, switch
Logiska operatorer */
int main() {
    bool b;
    int tal = 5;
    b = (tal < 3);
    // Nestlad if-sats
    if (b) {
        if (2==2) {
            cout <<"utskrift 1"<<endl;
        }

    } else {
        cout << "ANNARS" << endl;
    }
    tal = 89;

    if (tal==-3) {
        cout << "-3" << endl;
    } else if (tal==-2) {
        cout << "-2" << endl;
    } else if (tal==-1) {
        cout << "-1" << endl;
    } else if (tal==0) {
        cout << "0" << endl;
    } else if (tal==1) {
        cout << "1" << endl;
    } else {
        cout << "Talet hittades inte" << endl;
    }

    // Funkar endast med heltalsvariabler
    // Exempelvis int och char
    // char tecken = 'A' representeras av
    // heltalet 65
    // ASCCI-tabellen innehåller alla teckens
    // heltalsrepresentation
    switch (tal) {
    // Fungerar som == i en if-sats
    // case 'A': // Om du kollar tecken, char
    case -3:
        cout << "-3" << endl;
        break;
    case -2:
        cout << "-2" << endl;
        break;
    case -1:
        cout << "-1" << endl;
        break;
    case 0:
        cout << "0" << endl;
        break;
    case 1:
        cout << "1" << endl;
        break;
    case 10000:
        cout << "Jättestort" << endl;
        break;
    default: // Om inget annat är rätt
        cout << "Talet hittades inte" << endl;

    }
// Hoppar ut ur switchen om
// programmet kommer till "break;"
// Jämförelseoperatorer

    if ( 5 < 7) {
        cout << "Vi har jämfört och eftersom detta syns så vet vi att 5 är mindre än 7" << endl;
    }

    // < mindre än
    // <= mindre än eller lika med
    // > större än
    // >= större än eller lika med
    // != inte lika med, skilt från
    // == Lika med, samma som


    return 0;
}
