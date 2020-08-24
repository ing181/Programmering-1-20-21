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
int main()
{
    // cout=standard utmatningsenhet, skärmen
    cout << "Hello world!" << endl; // Text skall omges med ""
    cout << (6/3) << endl; // endl= ny rad
    //cout << (5/0) << endl;
    return 0;
}
