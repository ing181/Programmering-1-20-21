// Uppgift 2
#include <iostream>
using namespace std;

int main()
{
    int rad, col;
    cout << "Ange antalet rader ";
    cin >> rad;
    cout << "Ange antalet columner ";
    cin >> col;
    for ( int i = 0; i < rad; i++ ) {
        for ( int j = 0; j < col; j++ ) {
            cout << '*';
        }
        cout << endl;
    }
    return 0;
}
