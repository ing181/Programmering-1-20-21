#include <iostream>
using namespace std;
/*
  Hitta det minsta talet av tv� eller tre inmatade tal.
*/
int main()
{
    int a, b, c;
    // Tv� tal
    cout << "Mata in tv� tal ";
    cin >> a;
    cin >> b;
    if ( a <= b ) {
        cout << a << " �r minsta talet" << endl;
    }
    else {
        cout << b << " �r minsta talet" << endl;
    }
    // Tre tal, nu finns det m�nga s�tt att l�sa uppgiften
    cout << "Mata in tre tal ";
    cin >> a;
    cin >> b;
    cin >> c;
    // no 1
    if ( a <= b ) { // Om sant, kan det inte vara b
        if ( a <= c ) { // Om sant, kan det inte vara c
            cout << a << " �r minsta talet (no 1)" << endl; // D� m�ste det vara a
        }
        else {
            cout << c << " �r minsta talet (no 1)" << endl; // Om det inte �r b och inte a
            // m�ste det vara c
        }
    }
    else { // Det kan inte vara a
        if ( b <= c ) { // Om sant, kan det inte vara c
            cout << b << " �r minsta talet (no 1)" << endl; // Om det inte �r a och inte c
            // m�ste det vara b
        }
        else {
            cout << c << " �r minsta talet (no 1)" << endl; // Om det inte �r b och inte a
            // m�ste det vara c
        }
    }
    // no 2
    if ( ( a <= b ) && ( a <= c ) ) { // Om ( a <= b ) och ( a <= c ) �r sanna
        // �r a minsta talet
        cout << a << " �r minsta talet (no 2)" << endl;
    }
    else { // a �r INTE minsta talet, b eller c m�ste vara minsta talet
        if ( b <= c ) {
            cout << b << " �r minsta talet (no 2)" << endl;  // Det var b
        }
        else {
            cout << c << " �r minsta talet (no 2)" << endl; // Det var c
        }
    }
    // no 3
    if ( ( a > b ) || ( a > c ) ) { // Kan inte vara a, d� a �r st�rre �n b eller c
        if ( b <= c ) { // Inte a, inte c
            cout << b << " �r minsta talet (no 3)" << endl; // D� �r det b
        }
        else { // Inte a, inte b
            cout << c << " �r minsta talet (no 3)" << endl; // D� �r det b
        }
    }
    else {
        cout << a << " �r minsta talet (no 3)" << endl; // Om vi kommit �nda hit �r det bara a kvar
    }
    // no 4A
    if ( ( ( a > b ) || ( a > c ) ) && ( b <= c ) ) { // ( ( a > b ) || ( a > c ) ) Om sant, kan inte a vara minst.
        // det m�ste vara b eller c. Om ( b <= c ) �r sant...
        cout << b << " �r minsta talet (no 4)" << endl; // ..s� �r det b
    }
    else
        if ( ( ( a > b ) || ( a > c ) ) && ( c <= b ) ) {  // ( ( ( a > b ) || ( a > c ) ) Om sant, kan inte a vara minst.
            // det m�ste vara b eller c. Om ( c <= b )  �r sant...
            cout << c << " �r minsta talet (no 4)" << endl; // ..s� �r det c
        }
        else {
            cout << a << " �r minsta talet (no 4)" << endl;  // Bara a kvar, om ingen av de andra if-satserna �r sann m�ste a vara minst.
        }
    // no 5
    // En utm�rkt algoritm som �r l�tt att f�rst�.
    int temp = a;
    if ( b < temp ) {
        temp = b;
    }
    if ( c < temp ) {
        temp = c;
    }
    cout << temp << " �r minsta talet (no 5)" << endl;
    return 0;
}
