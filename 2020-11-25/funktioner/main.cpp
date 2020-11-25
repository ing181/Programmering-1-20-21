#include <iostream>
// hitta största talet
void presentation();
int matain(int falt[]);
void mataut(int falt[], int antal);
int hogsta(int falt[], int antal);
using namespace std;
int main() {

    int falt[100];
    presentation();
    // på samma sätt "int antal = 67"
    int antal = matain(falt); // OBS! Eftersom det är en array
    // är det samma array i funktionen
    // som här i huvudprogrammet (main)

    mataut(falt,antal);
    int maxtal = hogsta(falt,antal);

    cout << "Det störst talet du matade in är " << maxtal << endl;

    return 0;
}
void presentation() {
    cout << "Mata in possitiva heltal, högst 100 stycken" << endl;
    cout << "För att avslta matar du in ett negativt tal" << endl;
}
int matain(int falt[]) {
    int i = -1;
    do {
        i++;
        cout << "Mata in tal " << i+1 << " ";
        cin >> falt[i];


    } while ( falt[i] > 0 );
    return i;
}
void mataut(int falt[], int antal) {
    cout << "Du matade in följande positive heltal ";
    for (int j=0; j<antal; j++) {

        cout << falt[j] << " ";

    }
}
int hogsta(int falt[], int antal) {

    int temp = falt[0];
    for (int j=1; j<antal; j++) {
        if ( falt[j] > temp) {
            temp = falt[j];
        }
    }

    return temp;
}


