#include <iostream>
using namespace std;
// Funktion utan returvärde;
void namn(); // Funktionsdeklaration
int main()
{
    namn(); // Exekveringen går hit (1)
    namn();
    return 0;
}
// Funktionsdefinition
// int namn() Utvärde heltal
void namn() // (1)
{
    cout << "I dag är det onsdag" << endl;
    return;
    // return 4;
    cout << "Så det så! Så är det." << endl;
    // Programmkörningen fortsätter på rad 8
}
