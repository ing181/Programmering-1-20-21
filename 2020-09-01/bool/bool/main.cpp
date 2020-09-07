#include <iostream>

using namespace std;

int main()
{
    // Utryck som entydigt kan utvärderas som sant eller falskt
    // Ex
    bool b;
    int ar;
    cout << "Hur gammal är du?";
    cin >> ar;
    b = ( ar > 10 ); // Om sant får b värdet "true"
   // b = true; // eller 1
   // b = 0; // eller false
    if ( b ) { // Sant eller falskt
        cout << "Du är äldre än 10 år" << endl;
    }
    else {
     cout << "Du är INTE äldre än 10 år" << endl;
    }

    if (true) {
        cout << "Alltid sant" << endl;
    }


    return 0;
}
