#include <iostream>

using namespace std;

int main()
{
    cout << "\nMed for-sats\n"; // \n radbrytning
// cout << endl << "Med for-sats" << endl;
    // i=(i+1)
    for ( int i = 0; i < 10; i++ ) {
        for ( int j = 0; j < 10; j++ ) {
            cout << ( i + j ) << ' ';
        }
        cout << endl;
    }
    cout << "\nMed while-sats\n"; // \n radbrytning
    // cout << endl << "Med while-sats" << endl;
    int l = 0, m = 0;
    while ( l < 10 ) {
        while ( m < 10 ) {
            cout << ( l + m ) << ' ';
            m++;
        }
        cout << endl;
        l++;
        m = 0;
    }
    return 0;
}
