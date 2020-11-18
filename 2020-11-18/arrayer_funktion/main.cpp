#include <iostream>
using namespace std;
// Arrayer i funktioner
void faltFunktion(int falt[], int antal);
int main() {
    int falt[] = {1,2,3,4,5,6,7,8};

    int i=100;

    for (int i=0; i<8; i++) {

    cout << falt[i] << " ";
    }
    cout << endl << "Efter for-loopen är i = " << i << endl;


    faltFunktion(falt,8);

    return 0;
}

void faltFunktion(int f[], int antal) {
    for (int i=0; i<antal; i++) {
        cout << f[i] << " ";
    }

}
