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

        if ( a==c ) { // Om "(a==c)" eller "((a>b) && (a>c))" �r sant...
            cout << "a �r samma som c" << endl;
        } else { // ..och "(a==c)" inte �r sant, s� m�ste "((a>b) && (a>c))"
                 // vara sant
            cout << "a �r st�rre �n b och st�rre �n c" << endl;
        }
    }
    return 0;
}
