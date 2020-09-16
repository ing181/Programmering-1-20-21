#include <iostream>

using namespace std;

int main()
{
    int massatal[10]; // Plats för 10 int, indexeras från 0 till 9
    for ( int i = 0; i < 10; i++ ) {
        cout << "Mata in tal " << ( i + 1 ) << " ";
        cin >> massatal[i]; // Indexeringen börjar med 0
    }
    for ( int i = 0; i < 10; i++ ) {
        if ( massatal[i] < 0 ) {
            cout << massatal[i] << " är ett negativt tal" << endl;
        }
        else {
            cout << massatal[i] << " är ett possitivt tal" << endl;
        }
    }
    return 0;
}
