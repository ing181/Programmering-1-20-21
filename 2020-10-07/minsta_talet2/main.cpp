#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    double numbers[] = {1.1, 33.44, 4.09, 8.8, -2.0, 1.4, -9.9};
    cout << sizeof ( numbers[0] ) << endl; // Hur stor plats tar en double? 8 byte
// Man kan också skriva "sizeof(double);" också 8
    cout << sizeof ( numbers ) << endl; // Hur stor plats tar alla talen i numbers? 56 byte
// Kollar hur hånga platser det finns i numbers (7 stycken)
// int  a = (56/8) // Tilldelas 7
    int a = sizeof ( numbers ) / sizeof ( numbers[0] ); // 7
// Det finns 7 platser i numbers
    cout << "Antalet platser i numbers " << a << endl;  // 7
// Funktion som sorterar en array i stigande ordning
// sort är en inbygd funktion (funktioner kommer efter provet)
// Argumenten, det som står i ( ) är pekare, variabler som innehåller
// adressen (adressen i RAM-minnet), till arryen numbers
    sort ( numbers, numbers + a ); //Sortering av alla användarens tal
    // så att det den skriver ut blir det minsta
    cout << numbers[0] << " är det minsta talet." << endl; //skriver ut det minsta talet
    // Ett annat sätt att hitta minsta talet
    // temp får första värdet i numbers
    double temp = numbers[0];
    // Vi kollar varje efterföljande plats, är
    // talet mindre, hamnar det i temp.
    // Annars händer inget
    for ( int i = 1; i < 8; i++ ) {
        if ( numbers[i] < temp ) {
            temp = numbers[i];
        }
    }
    cout << "Det minsta talet är " << temp << endl;
    return 0;
}
