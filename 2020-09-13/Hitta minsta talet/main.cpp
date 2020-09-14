#include <iostream>
using namespace std;
/*
  Hitta det minsta talet av två eller tre inmatade tal.
*/
int main()
{
    int a, b, c;
    // Två tal
    cout << "Mata in två tal ";
    cin >> a;
    cin >> b;
    if ( a <= b ) {
        cout << a << " är minsta talet" << endl;
    }
    else {
        cout << b << " är minsta talet" << endl;
    }
    // Tre tal, nu finns det många sätt att lösa uppgiften
    cout << "Mata in tre tal ";
    cin >> a;
    cin >> b;
    cin >> c;
    // no 1
    if ( a <= b ) { // Om sant, kan det inte vara b
        if ( a <= c ) { // Om sant, kan det inte vara c
            cout << a << " är minsta talet (no 1)" << endl; // Då måste det vara a
        }
        else {
            cout << c << " är minsta talet (no 1)" << endl; // Om det inte är b och inte a
            // måste det vara c
        }
    }
    else { // Det kan inte vara a
        if ( b <= c ) { // Om sant, kan det inte vara c
            cout << b << " är minsta talet (no 1)" << endl; // Om det inte är a och inte c
            // måste det vara b
        }
        else {
            cout << c << " är minsta talet (no 1)" << endl; // Om det inte är b och inte a
            // måste det vara c
        }
    }
    // no 2
    if ( ( a <= b ) && ( a <= c ) ) { // Om ( a <= b ) och ( a <= c ) är sanna
        // är a minsta talet
        cout << a << " är minsta talet (no 2)" << endl;
    }
    else { // a är INTE minsta talet, b eller c måste vara minsta talet
        if ( b <= c ) {
            cout << b << " är minsta talet (no 2)" << endl;  // Det var b
        }
        else {
            cout << c << " är minsta talet (no 2)" << endl; // Det var c
        }
    }
    // no 3
    if ( ( a > b ) || ( a > c ) ) { // Kan inte vara a, då a är större än b eller c
        if ( b <= c ) { // Inte a, inte c
            cout << b << " är minsta talet (no 3)" << endl; // Då är det b
        }
        else { // Inte a, inte b
            cout << c << " är minsta talet (no 3)" << endl; // Då är det b
        }
    }
    else {
        cout << a << " är minsta talet (no 3)" << endl; // Om vi kommit ända hit är det bara a kvar
    }
    // no 4A
    if ( ( ( a > b ) || ( a > c ) ) && ( b <= c ) ) { // ( ( a > b ) || ( a > c ) ) Om sant, kan inte a vara minst.
        // det måste vara b eller c. Om ( b <= c ) är sant...
        cout << b << " är minsta talet (no 4)" << endl; // ..så är det b
    }
    else
        if ( ( ( a > b ) || ( a > c ) ) && ( c <= b ) ) {  // ( ( ( a > b ) || ( a > c ) ) Om sant, kan inte a vara minst.
            // det måste vara b eller c. Om ( c <= b )  är sant...
            cout << c << " är minsta talet (no 4)" << endl; // ..så är det c
        }
        else {
            cout << a << " är minsta talet (no 4)" << endl;  // Bara a kvar, om ingen av de andra if-satserna är sann måste a vara minst.
        }
    // no 5
    // En utmärkt algoritm som är lätt att förstå.
    int temp = a;
    if ( b < temp ) {
        temp = b;
    }
    if ( c < temp ) {
        temp = c;
    }
    cout << temp << " är minsta talet (no 5)" << endl;
    return 0;
}
