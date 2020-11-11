#include <iostream>
using namespace std;
// return int
// Funktion för att avgöra om ett tal är
// Positivt eller negativt
// returnerar true om positivt
// returnerar false om negativt
bool isPossitivt(int); // Parameter, argument, invärde
int main()
{
    int tal;
    cout << "Mata in ett tal ";
    cin >> tal;
    if ( isPossitivt(tal) ) {
        cout << "Du matade in ett positivt tal" << endl;
    }
    else {
        cout << "Du matade in ett negativt tal" << endl;
    }

    return 0;
}
// Funktionsdefinition
bool isPossitivt(int x)
{
    if (x < 0) {
        return false; // Återvänder till main med värdet false
    }

    return true; // Återvänder till main med värdet true
}
