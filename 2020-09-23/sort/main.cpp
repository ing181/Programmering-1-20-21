#include <iostream>

using namespace std;

int main()
{
    int falt[] = {-5, -6, 34, 9};
    for ( int k = 0; k < 4; k++ ) {
        cout << falt[k] << ' ';
    }
    cout << endl;
    int i, n;
    int temp;
    for ( n = 1; n < 4; n++ ) {
        temp = falt[n];
        i = n - 1; // i som index i falt, �r talet f�re index n
        while ( ( i >= 0 ) && ( falt[i] > temp ) ) {  // s� l�nge som  falt[i] �r st�rre �n falt[n]

            falt[i + 1] = falt[i]; // Flyttas fram ett steg
            i--;
        }
        falt[i + 1] = temp; // Hamnar p� index framf�r
    }
    for ( int k = 0; k < 4; k++ ) {
        cout << falt[k] << ' ';
    }
    cout << endl;
    return 0;
}
