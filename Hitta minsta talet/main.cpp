#include <iostream>

using namespace std;

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

    // Tre tal
    cout << "Mata in tre tal ";
    cin >> a;
    cin >> b;
    cin >> c;
    // no 1
    if ( a <= b ) {
        if ( a <= c ) {
            cout << a << " �r minsta talet (no 1)" << endl;
        }
        else {
            cout << c << " �r minsta talet (no 1)" << endl;
        }
    }
    else {
        if ( b <= c ) {
            cout << b << " �r minsta talet (no 1)" << endl;
        }
        else {
            cout << c << " �r minsta talet (no 1)" << endl;
        }
    }
    // no 2
    if ( ( a <= b ) && ( a <= c ) ) {
        cout << a << " �r minsta talet (no 2)" << endl;
    }
    else {
        if ( b <= c ) {
            cout << b << " �r minsta talet (no 2)" << endl;
        }
        else {
            cout << c << " �r minsta talet (no 2)" << endl;
        }
    }
    // no 3
    if ( ( a >= b ) || ( a >= c ) ) {
        if ( b <= c ) {
            cout << b << " �r minsta talet (no 3)" << endl;
        }
        else {
            cout << c << " �r minsta talet (no 3)" << endl;
        }
    }
    else {
        cout << a << " �r minsta talet (no 3)" << endl;
    }
    if ( ( ( a >= b ) || ( a >= c ) ) && ( b <= c ) ) {
        cout << b << " �r minsta talet (no 4)" << endl;
    }
    // no 4
    else
        if ( ( ( a >= b ) || ( a >= c ) ) && ( c <= b ) ) {
            cout << c << " �r minsta talet (no 4)" << endl;
        }
        else {
            cout << a << " �r minsta talet (no 4)" << endl;
        }
    // 5
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
