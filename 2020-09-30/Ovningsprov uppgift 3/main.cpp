#include <iostream>
using namespace std;
/*
Skriv ett program som hj�lper dig ber�kna vad det kostar att k�ra bil. Du har en
inmatning f�r �rlig skatt i kronor, en inmatning f�r br�nslef�rbrukning (liter/mil).
Samt en inmatning f�r br�nslepriset (kr/liter) och din �rliga k�rstr�cka.
Exempel p� utskrift:
Mata in skatten du betalar varje �r (kronor):
2360
Bilens br�nslef�rbrukning (liter/mil):
0.6
Vad kostar drivmedlet (kr/liter):
15.88
Hur m�nga mil k�r du varje �r:
1400
Din kostnad blir 15699.2 kronor per �r
*/
int main()
{
	// Ett antal variabler f�r anv�ndarens inmatning
    float skatt, forbrukning, kostnaddrivmedel, korstracka;
    cout << "Hello world!" << endl;
    cout << "�rlig skatt ";
    cin >> skatt;
    cout << "F�rbruknin (liter/mil) ";
    cin >> forbrukning;
    cout << "Kostnad f�r drivmedel (kr/liter) ";
    cin >> kostnaddrivmedel;
    cout << "Hur mycket k�r du? (mil) ";
    cin >> korstracka;
    // Det �r bara att r�kna ut!
    float kostnad = forbrukning * kostnaddrivmedel * korstracka + skatt;
    cout << "�rlig kostnad f�r att k�ra din bil = " << kostnad << " kronor" << endl;

    return 0;
}
