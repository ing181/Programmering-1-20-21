#include <iostream>
using namespace std;
// Funktioner
// Funktionsdeklaration
// utvärde namn();
int minFunktion(int tal);
int main()
{
    int tal = 4;
    int tal2;
    tal2 = tal;
    // Använder funktionen
    cout << minFunktion(tal2) << endl;




    return 0;
}
// Funktionsdefinition
int minFunktion(int varde)
{
    int tal = 100 + varde;
    return tal;
}
