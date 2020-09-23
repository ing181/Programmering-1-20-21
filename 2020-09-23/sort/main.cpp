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
        i = n - 1; // i som index i falt, är talet före index n
        while ( ( i >= 0 ) && ( falt[i] > temp ) ) {  // så länge som  falt[i] är större än falt[n]

            falt[i + 1] = falt[i]; // Flyttas fram ett steg
            i--;
        }
        falt[i + 1] = temp; // Hamnar på index framför
    }
    for ( int k = 0; k < 4; k++ ) {
        cout << falt[k] << ' ';
    }
    cout << endl;
    return 0;
}
