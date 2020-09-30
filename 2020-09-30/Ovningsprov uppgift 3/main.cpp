#include <iostream>
using namespace std;
/*
Skriv ett program som hjälper dig beräkna vad det kostar att köra bil. Du har en
inmatning för årlig skatt i kronor, en inmatning för bränsleförbrukning (liter/mil).
Samt en inmatning för bränslepriset (kr/liter) och din årliga körsträcka.
Exempel på utskrift:
Mata in skatten du betalar varje år (kronor):
2360
Bilens bränsleförbrukning (liter/mil):
0.6
Vad kostar drivmedlet (kr/liter):
15.88
Hur många mil kör du varje år:
1400
Din kostnad blir 15699.2 kronor per år
*/
int main()
{
	// Ett antal variabler för användarens inmatning
    float skatt, forbrukning, kostnaddrivmedel, korstracka;
    cout << "Hello world!" << endl;
    cout << "Årlig skatt ";
    cin >> skatt;
    cout << "Förbruknin (liter/mil) ";
    cin >> forbrukning;
    cout << "Kostnad för drivmedel (kr/liter) ";
    cin >> kostnaddrivmedel;
    cout << "Hur mycket kör du? (mil) ";
    cin >> korstracka;
    // Det är bara att räkna ut!
    float kostnad = forbrukning * kostnaddrivmedel * korstracka + skatt;
    cout << "Årlig kostnad för att köra din bil = " << kostnad << " kronor" << endl;

    return 0;
}
