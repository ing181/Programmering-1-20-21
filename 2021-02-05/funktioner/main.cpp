
#include <iostream>
#include <math.h>
using namespace std;
// Gör ett program som kan beräkna arean och omkretsen av en
// cirkel om användaren (du) matar in
// cirkelns radie.
// O = PI * r * 2;
// A = PI * r*r;
const float PI = 3.1415; // Global variabel. Fara!
// Funktion som räknar ou omkretsen när radien är given
// Invärde: radien
// Utvärde: omkretsen
float omkrets(float); // Deklarerat funktionen
int main()
{
    float radie;
    cout << "Ange radien: " << endl;
    cin >> radie;
    //cout << "Omkretsen blir " << omkrets(radie) << endl;
    float omkretsen = omkrets(radie);
   // float omkrets = 5.6;
   // float f = 7.8;
   // float omkrets = f;
    cout << "Omkretsen blir " << omkretsen << endl;
    cout << 3 << " upphöjt till " << 4 << " blir " << pow(3,4) << endl;
    return 0;
}

float omkrets(float r) // Definierar vad funktionen gör
{
   float omkrets = r * PI * 2;
   return omkrets;
}
