
// while, do-while kap. 5
// for-sats for-loope kap. 13, 13.3

#include <iostream>
using namespace std;

int main()
{
    //int i=5; // Deklarerar, v�rdet ej definierat
    int i = 5; // Deklarerar, v�rdet definierat
    // wile, k�rs om sant
    while ( i != 5 ) {
        cout << "while" << endl;
        cout << "V�lj ett heltal ";
        cin >> i;
        cout << "Du valse " << i << endl;
    }
    // k�rs MINST en g�ng
    do {
        cout << "do-while" << endl;
        cout << "V�lj ett heltal ";
        cin >> i;
        cout << "Du valse " << i << endl;
    }
    while ( i != 5 );
    return 0;
}
