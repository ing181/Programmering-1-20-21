
// while, do-while kap. 5
// for-sats for-loope kap. 13, 13.3

#include <iostream>
using namespace std;

int main()
{
    //int i=5; // Deklarerar, värdet ej definierat
    int i = 5; // Deklarerar, värdet definierat
    // wile, körs om sant
    while ( i != 5 ) {
        cout << "while" << endl;
        cout << "Välj ett heltal ";
        cin >> i;
        cout << "Du valse " << i << endl;
    }
    // körs MINST en gång
    do {
        cout << "do-while" << endl;
        cout << "Välj ett heltal ";
        cin >> i;
        cout << "Du valse " << i << endl;
    }
    while ( i != 5 );
    return 0;
}
