#include <iostream>

using namespace std;

int main()
{
    int massatal[10]; // Plats f�r 10 int, indexeras fr�n 0 till 9
    for ( int i = 0; i < 10; i++ ) {
        cout << "Mata in tal " << ( i + 1 ) << " ";
        cin >> massatal[i]; // Indexeringen b�rjar med 0
    }
    for ( int i = 0; i < 10; i++ ) {
        if ( massatal[i] < 0 ) {
            cout << massatal[i] << " �r ett negativt tal" << endl;
        }
        else {
            cout << massatal[i] << " �r ett possitivt tal" << endl;
        }
    }
    return 0;
}
