#include <iostream>
using namespace std;
// Arayer som argument till funktioner
// Som visas i exemplet nedan
// när en array skickas som invärde till en funktion
// KOPIERAS INTE ARRAYEN
// VI TALAR OM FÖR FUNKTIONEN VAR ARRAYEN FINNS
// FUNKTIONEN PÅVERKAR DET SOM FINNS PÅ ADRESSEN
// VI SKICKAT TILL FUNKTIONEN
void faltFunktion(int falt[]);
int main() {
    int tal;
    tal = 7;
    // Adressen (i ram-minnet) till platsen
    // där värdet finns, i detta exempel 7
    cout << &tal << endl; // Ett hexadecimalt tal
    // * betyder att vi vill skriva ut det som finns
    // på adressen till variabeln tal
    cout << *(&tal) << endl; // 7
    cout << tal << endl; // Ett enklare sätt att göra samma sak som på rad 19
    /*    */

    int falt[] = {99,2,3}; // En array deklareras och den får värden

    // Vad betyder namnet på arrayen?
    cout << falt << endl; // Adressen till arrayen falt, ett hexadecimalt tal
    cout << *falt << endl; // Vad finns på den adressen? 99
    // Vi ser att "falt" är adressen till första värdet i arrayen falt
    // Vad vi skickar till funktionen är alltså adressen till
    // första värdet. Funktionen vet att det är en array, vi har
    // det med i deklarationen "falt[]"
    faltFunktion(falt);

    for (int i=0; i<3; i++) {
        cout << falt[i] << " ";
    }
    cout << endl;

    return 0;
}
// Ingenting kopieras till funktionen
// Funktionen har fått en adress.
// Samma adress som används i huvudprogrammet (main)
// Så det som funktionen gör med det som finns på adressen
// märks också i huvudprogrammet.
void faltFunktion(int f[]) {
    for (int i=0; i<3; i++) {
        cout << f[i] << " "; // 99, 2, 3
    }
    cout << endl;
    f[1] = 101; // Här förändras det som finns på
    // adressen f[1]
    // f[i] i funktionen och falt[1] i huvudprogrammet
    // samma ska.
}
