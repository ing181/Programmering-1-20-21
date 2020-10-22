#include <iostream>
// Om "&&" och "||" (&& betyder AND, || betyder OR)
using namespace std;
int main() {
    int a, b, c;
    cout << "Mata in tre tal ";
    cin >> a;
    cin >> b;
    cin >> c;
    // Logiska operatorer "in action"
    if (  (a==c) || ((a>b) && (a>c)) ) {

        cout << "SANT" << endl;

        if ( a==c ) { // Om "(a==c)" eller "((a>b) && (a>c))" är sant...
            cout << "a är samma som c" << endl;
        } else { // ..och "(a==c)" inte är sant, så måste "((a>b) && (a>c))"
                 // vara sant
            cout << "a är större än b och större än c" << endl;
        }
    }
    return 0;
}
