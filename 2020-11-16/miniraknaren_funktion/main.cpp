#include <iostream>
using namespace std;
void meny(); // Funktionsdeklaration: Utvärde, namn, invärde
void valjRaknesatt(char val);
float p();
float m();
void utskrift(float);
int main() {
    meny();
}

void meny() { // Funktionsdefinition Definierar vad funktionen ska göra.
    char val;
    cout << "Välkommen till Miniräknare!" << endl;
    cout << "Välj räknesätt" << endl;
    cout << "+" << endl;
    cout << "-" << endl;
    cin >> val;

    valjRaknesatt(val);
}
void valjRaknesatt(char val) {


    float ut;

    switch (val) {

    case '+':
        ut = p();
        utskrift(ut);
        break;

    case '-':
        ut = m();
        utskrift(ut);
        break;

    default:
        cout << "Felaktigt val" << endl;
    }

}


float p() {
    float a, b;
    cout << "Mata in första talet ";
    cin >> a;
    cout << "Mata in andra talet ";
    cin >> b;
    return (a+b);
}

float m() {
    float a, b;
    cout << "Mata in första talet ";
    cin >> a;
    cout << "Mata in andra talet ";
    cin >> b;
    return (a-b);
}

void utskrift(float ut) {
    cout << "Svaret blir " << ut << endl;
}
