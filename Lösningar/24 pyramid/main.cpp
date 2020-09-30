#include <iostream>

using namespace std;

int main()
{
    int antal;
    cout << "Ange antal ";
    cin >> antal;
    for ( int k = 0; k < 3; k++ ) {
        for ( int i = 0; i < antal; i++ ) {
            for ( int j = 0; j <= i; j++ ) {
                cout << '*';
            }
            cout << endl;
        }
        for ( int i = 0; i < antal; i++ ) {
            for ( int j = antal; j >= i; j-- ) {
                cout << '*';
            }
            cout << endl;
        }
    }
    return 0;
}
