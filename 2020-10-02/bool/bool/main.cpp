#include <iostream>

using namespace std;

int main()
{
    // Alla uttryck som kan utv�rderas
    // till att vara true eller false
    // <, <=, ==, >, >=, !=
    // kan lagras i en boolsk variabel
    // bool
    // bool b = ( 4 != 4 );
    // cout << b << endl;
    // 1 �r sant
    // 0 �r falskt
    // b = true;
    // cout << b << endl;
    int i = 0;
    int in;
    bool isEven = false;
    while ( i < 5 ) {
        cout << "Mata in ett heltal ";
        cin >> in;
        if ( ( in % 2 ) == 0 ) { // Ett j�mnt tal
            isEven = true;
            break;
        }
        i++;
    }
    if ( isEven ) {
        cout << "Du matade in ett j�mnt tal" << endl;
    }
    else {
        cout << "Du matade inte in ett enda j�mnt tal" << endl;
    }
    return 0;
}
