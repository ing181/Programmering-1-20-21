// Saker som vi beh�ver
// finns i olika bibliotek
// iostrem inneh�ller saker som g�r det m�jligt att
// mata in fr�n tangentbordet och att skriva ut p� sk�rmen
#include <iostream>
// namespace std talar om att
// sakerna vi tar med skall finnas i
// namnrymden std
using namespace std;
// int main, int betyder ett heltal
// ett heltal skall returneras fr�n programmet till operativsystemet
// "returneras" kan �vers�ttas med "skickas fr�n prgrammet"
// eller "kommer fr�n programmet" och skickas till operativsystemet, Windows
int main()
{
    // cout=standard utmatningsenhet, sk�rmen
    cout << "Hello world!" << endl; // Text skall omges med ""
    cout << (6/3) << endl; // endl=ny rad
    //cout << (5/0) << endl; // H�r h�nder det n�got f�rbudet, division med 0
    // "Ett heltal, skilt fr�n 0" kommer att returneras 
	return 0; // Tar vi bort kommenteringen fr�n rad 19, kommer aldrig programmet hit.
}
