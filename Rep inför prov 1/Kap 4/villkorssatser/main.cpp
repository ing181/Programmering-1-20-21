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
    // ASCCI-tabellen inneh�ller alla teckens
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
        cout << "J�ttestort" << endl;
        break;
    default: // Om inget annat �r r�tt
        cout << "Talet hittades inte" << endl;

    }
// Hoppar ut ur switchen om
// programmet kommer till "break;"
// J�mf�relseoperatorer

    if ( 5 < 7) {
        cout << "Vi har j�mf�rt och eftersom detta syns s� vet vi att 5 �r mindre �n 7" << endl;
    }

    // < mindre �n
    // <= mindre �n eller lika med
    // > st�rre �n
    // >= st�rre �n eller lika med
    // != inte lika med, skilt fr�n
    // == Lika med, samma som


    return 0;
}
