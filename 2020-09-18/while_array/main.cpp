#include <iostream>

using namespace std;

int main()
{
    // Arrayer (vektorer, fält)
    // skalär variabel, "vanlig variabel",
    // ett värde
    double d;
    d = 3.4;
    // initsiering (variabeln skapas)
    // då har man chansen att också
    // ge värden till alla platser
    // platser: alla indexvärden
    double da[] = {1, 2.5, 8.01, 7};
    da[0] = 3.4;
    da[1] = 66;
    da[2] = 3.55;
    da[3] = 8.8;
    // da[4 fins int

    int i = 0;
    while ( i < 5 ) {
        cout << da[i] << endl;
        i++;
    }

    int tal;
    cout << "tal " << tal;
    for ( int i = 0; i < 5; i++ ) {
        cout << da[i] << endl;
    }
    return 0;
}
