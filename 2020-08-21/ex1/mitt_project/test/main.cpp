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
int main()
{
    // cout=standard utmatningsenhet, sk�rmen
    cout << "Hello world!" << endl; // Text skall omges med ""
    cout << (6/3) << endl; // endl= ny rad
    //cout << (5/0) << endl;
    return 0;
}
