#include <iostream>

using namespace std;

int main()
{
    // Alla uttryck som kan utvärderas
    // till att vara true eller false
    // <, <=, ==, >, >=, !=
    // kan lagras i en boolsk variabel
    // bool
    // bool b = ( 4 != 4 );
    // cout << b << endl;
    // 1 är sant
    // 0 är falskt
    // b = true;
    // cout << b << endl;
    int i = 0;
    int in;
    bool isEven = false;
    while ( i < 5 ) {
        cout << "Mata in ett heltal ";
        cin >> in;
        if ( ( in % 2 ) == 0 ) { // Ett jämnt tal
            isEven = true;
            break;
        }
        i++;
    }
    if ( isEven ) {
        cout << "Du matade in ett jämnt tal" << endl;
    }
    else {
        cout << "Du matade inte in ett enda jämnt tal" << endl;
    }
    return 0;
}
