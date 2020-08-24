// Saker som vi behöver
// finns i olika bibliotek
// iostrem innehåller saker som gör det möjligt att
// mata in från tangentbordet och att skriva ut på skärmen
#include <iostream>
// namespace std talar om att
// sakerna vi tar med skall finnas i
// namnrymden std
using namespace std;
// int main, int betyder ett heltal
// ett heltal skall returneras från programmet till operativsystemet
// "returneras" kan översättas med "skickas från prgrammet"
// eller "kommer från programmet" och skickas till operativsystemet, Windows
int main()
{
    // cout=standard utmatningsenhet, skärmen
    cout << "Hello world!" << endl; // Text skall omges med ""
    cout << (6/3) << endl; // endl=ny rad
    //cout << (5/0) << endl; // Här händer det något förbudet, division med 0
    // "Ett heltal, skilt från 0" kommer att returneras 
	return 0; // Tar vi bort kommenteringen från rad 19, kommer aldrig programmet hit.
}
