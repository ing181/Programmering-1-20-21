#include <iostream>

using namespace std;

int main()
{
    // Utryck som entydigt kan utv�rderas som sant eller falskt
    // Ex
    bool b;
    int ar;
    cout << "Hur gammal �r du?";
    cin >> ar;
    b = ( ar > 10 ); // Om sant f�r b v�rdet "true"
   // b = true; // eller 1
   // b = 0; // eller false
    if ( b ) { // Sant eller falskt
        cout << "Du �r �ldre �n 10 �r" << endl;
    }
    else {
     cout << "Du �r INTE �ldre �n 10 �r" << endl;
    }

    if (true) {
        cout << "Alltid sant" << endl;
    }


    return 0;
}
