#include <iostream>
using namespace std;
// Hur arrayer hanteras i funktioner
void skrivUtArray(int falt[]);
int main() {

    int falt[] = {1,11,111};

    skrivUtArray(falt); // Endast namnet

    return 0;
}
void skrivUtArray(int falt[]) {
    for (int i=0; i<3; i++) {

        cout << falt[i] << " ";
    }
    cout << endl;
}


