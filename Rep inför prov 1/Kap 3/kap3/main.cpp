#include <iostream>
#include <string>
using namespace std;
/*
Variabler, olika datatyper, in- och utmatning och klassen string.
Kapitel 3, sidorna 29 - 37.
*/

int main()
{

    // datatyp namn;
    // heltal
    int tal;
    // OBS! Använd aldrig en variabel utan att
    // den har fått ett värde
    tal = tal + 3; // Ingen bra ide!
    // odifinierat värde + 3
    tal = 2;

    tal = tal + 3; // Bra ide!
    // 2 + 3
    // Decimaltal, flyttal
    float f;
    double d;
    // double kan hantera större tal än float och
    // har större noggranhet. Fler decimaler.

    // Är du helt säker på att variabeln aldrig
    // kommer att tilldelas ett negativt värde
    // kan du ange "unsigned"
    // EX: "unsigned int tal;"
    // Varför?
    // Du kan ha ett dubbelt så stort tal i variabeln.

    // Variabler som inte går att ändra
    // Ange "const" före
    // EX: "const float PI = 4.1415";
    // Varför?
    // De vill definiera en konstant och vill inte att
    // den av misstag ändras.

    // En till heltalsvariabel
    // "char", som används för tecken
    // Skrivs alltid med enkla citattecken
    // EX: char tecken = 'P';
    // OBS! Går att räkna med, som andra
    // heltalsvariabler
    // EX: "tecken++;" betyder att tecken
    // Nu representerar tecknet 'Q'
    //
    // Datatypen bool
    // bool kan hantera sanningsvärden. Det finns
    // bara två. "true" och "false"
    // boolsk variabel kan du alltså tilldela
    // resultatet från ett uttryck som kan
    // entydigt bestämmas vara "true" eller "false"
    // EX: bool b = (3==3); (sant)
    //
    // Detta är inte matte
    // int x;
    // x = 2 + x; Betyder inte "x är lika med 2 + x"
    // Utan "x tilldelas x + 2"
    //
    // Om klassen string
    // int, char, float och double kallas enkla datatyper
    // och är inbygda i C++
    // string är en klass. I klassen string ingår en
    // massa extra finesser.
    // Deklarerar vi en string så gör vi faktiskt så här:
    // "Deklarerar ett objekt av klassen string"
    // Fungerar på samma sätt som när du deklarerar
    // en enkel datatyp. EX: "int tal;"
    string s = "HEJ";
    s = "Bla bla bla";
    s = "P";
    // s ändrar storlek allt efter behov.
    // Det finns en massa inbygda finesser också,
    // kommer efter provet
    cout << s.size() << endl; // Antalet tecken
    // In- oc utmatning
    // cin är tangentbordet, >> är inmatningsoperatorn
    int t;
    cin >> t; // Inmatning från tangentbordet till
    // variabeln t
    // cout är skärmen, << är utmatningsoperatorn
    // Utmatning från variabeln t till skärmen
    cout << t;

    return 0;
}
