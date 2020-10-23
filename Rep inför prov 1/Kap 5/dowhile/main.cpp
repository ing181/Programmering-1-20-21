#include <iostream>
using namespace std;
/* do while */
int main()
{
    char bokstav; // char, för ett tecken
    do {

       cout << "Avsluta med a ";
       cin >> bokstav;

    } while( bokstav != 'a'); // OBS! enkla citattecken runt
                              // datatypen char

    return 0;
}
