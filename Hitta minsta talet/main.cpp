#include <iostream>

using namespace std;

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

    // Tre tal
    cout << "Mata in tre tal ";
    cin >> a;
    cin >> b;
    cin >> c;
    // no 1
    if ( a <= b ) {
        if ( a <= c ) {
            cout << a << " är minsta talet (no 1)" << endl;
        }
        else {
            cout << c << " är minsta talet (no 1)" << endl;
        }
    }
    else {
        if ( b <= c ) {
            cout << b << " är minsta talet (no 1)" << endl;
        }
        else {
            cout << c << " är minsta talet (no 1)" << endl;
        }
    }
    // no 2
    if ( ( a <= b ) && ( a <= c ) ) {
        cout << a << " är minsta talet (no 2)" << endl;
    }
    else {
        if ( b <= c ) {
            cout << b << " är minsta talet (no 2)" << endl;
        }
        else {
            cout << c << " är minsta talet (no 2)" << endl;
        }
    }
    // no 3
    if ( ( a >= b ) || ( a >= c ) ) {
        if ( b <= c ) {
            cout << b << " är minsta talet (no 3)" << endl;
        }
        else {
            cout << c << " är minsta talet (no 3)" << endl;
        }
    }
    else {
        cout << a << " är minsta talet (no 3)" << endl;
    }
    if ( ( ( a >= b ) || ( a >= c ) ) && ( b <= c ) ) {
        cout << b << " är minsta talet (no 4)" << endl;
    }
    // no 4
    else
        if ( ( ( a >= b ) || ( a >= c ) ) && ( c <= b ) ) {
            cout << c << " är minsta talet (no 4)" << endl;
        }
        else {
            cout << a << " är minsta talet (no 4)" << endl;
        }
    // 5
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
