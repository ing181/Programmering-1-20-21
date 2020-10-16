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
    // OBS! Anv�nd aldrig en variabel utan att
    // den har f�tt ett v�rde
    tal = tal + 3; // Ingen bra ide!
    // odifinierat v�rde + 3
    tal = 2;

    tal = tal + 3; // Bra ide!
    // 2 + 3
    // Decimaltal, flyttal
    float f;
    double d;
    // double kan hantera st�rre tal �n float och
    // har st�rre noggranhet. Fler decimaler.

    // �r du helt s�ker p� att variabeln aldrig
    // kommer att tilldelas ett negativt v�rde
    // kan du ange "unsigned"
    // EX: "unsigned int tal;"
    // Varf�r?
    // Du kan ha ett dubbelt s� stort tal i variabeln.

    // Variabler som inte g�r att �ndra
    // Ange "const" f�re
    // EX: "const float PI = 4.1415";
    // Varf�r?
    // De vill definiera en konstant och vill inte att
    // den av misstag �ndras.

    // En till heltalsvariabel
    // "char", som anv�nds f�r tecken
    // Skrivs alltid med enkla citattecken
    // EX: char tecken = 'P';
    // OBS! G�r att r�kna med, som andra
    // heltalsvariabler
    // EX: "tecken++;" betyder att tecken
    // Nu representerar tecknet 'Q'
    //
    // Datatypen bool
    // bool kan hantera sanningsv�rden. Det finns
    // bara tv�. "true" och "false"
    // boolsk variabel kan du allts� tilldela
    // resultatet fr�n ett uttryck som kan
    // entydigt best�mmas vara "true" eller "false"
    // EX: bool b = (3==3); (sant)
    //
    // Detta �r inte matte
    // int x;
    // x = 2 + x; Betyder inte "x �r lika med 2 + x"
    // Utan "x tilldelas x + 2"
    //
    // Om klassen string
    // int, char, float och double kallas enkla datatyper
    // och �r inbygda i C++
    // string �r en klass. I klassen string ing�r en
    // massa extra finesser.
    // Deklarerar vi en string s� g�r vi faktiskt s� h�r:
    // "Deklarerar ett objekt av klassen string"
    // Fungerar p� samma s�tt som n�r du deklarerar
    // en enkel datatyp. EX: "int tal;"
    string s = "HEJ";
    s = "Bla bla bla";
    s = "P";
    // s �ndrar storlek allt efter behov.
    // Det finns en massa inbygda finesser ocks�,
    // kommer efter provet
    cout << s.size() << endl; // Antalet tecken
    // In- oc utmatning
    // cin �r tangentbordet, >> �r inmatningsoperatorn
    int t;
    cin >> t; // Inmatning fr�n tangentbordet till
    // variabeln t
    // cout �r sk�rmen, << �r utmatningsoperatorn
    // Utmatning fr�n variabeln t till sk�rmen
    cout << t;

    return 0;
}
