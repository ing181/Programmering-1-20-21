#include <iostream>
using namespace std;
/*

2. Skriv ett program som tar två stycken char som invärden, char a och char b.
Användaren bestämmer vad variablerna ska ha för värden i huvudprogrammet innan de skickas till
funktionen. Efter funktionen ska värdet på a och värdet på b ha bytts med varandra.
EX:
i main
cin >> a;  Användaren matar in X
cin >> b;  Användaren matar in Y
 a och b skickas till funktionen, efter funktionen blir utskriften i huvudprogrammet
cout << a;   // Skriver ut Y
cout << b;   // Skriver ut X

*/
// void byt(char &x, char &y); // & Referensparametrar
char byt(char &x, char y); // & Referensparametrar
int main()
{

    char a, b;
    cout << "Mata in tecken 1 ";
    cin >> a;

    cout << "Mata in tecken 2 ";
    cin >> b;

    cout << "Före bytet: a=" << a << " b=" << b << endl;
    char ut = byt(a,b);
    /*
        char temp = a;
        a = b;
        b = temp;
    */

    cout << "Efter bytet: a=" << a << " b=" << ut << endl;
   // cout << "Efter bytet: a=" << a << " b=" << b << endl;

    return 0;
}
//void byt(char &x, char &y)
//{
    // x här i funktionen är samma variabel
    // som a i huvudprogrammet, tack vare
    // att a skickas som referensparameter
    // y här i funktionen är samma variabel
    // som b i huvudprogrammet, tack vare
    // att b skickas som referensparameter
   // char temp = x;
   // x = y;
   // y = temp;
//}
char byt(char &x, char y)
{
    char temp = x;
    x = y;
    y = temp;
    return y;
}
