#include <iostream>
using namespace std;
/*
Skriv ett program som tar två stycken char som invärden,
char a och char b.
Användaren bestämmer vad variablerna ska ha för värden
i huvudprogrammet innan de skickas till
funktionen. Efter funktionen ska värdet på a och
värdet på b ha bytts med varandra.
*/
void byt(char &a, char &b); // Referensparametrar ( "by reference" )
// void byt(char a, char b); // Värdeparametrar ( "by value" )
int main()
{
    char a;
    char b;
    cout << "Mata in två tecken ";
    cin >> a;
    cout << "Mata in nästa tecken ";
    cin >> b;
    cout << "Före funktionen a=" << a << " b=" << b << endl;
    byt(a,b);
    cout << "Efter funktionen a=" << a << " b=" << b << endl;

    char p = 'k';
    char m = p;
    m = 'x';

    return 0;
}
void byt(char &x, char &y)
{
    char temp = x;
    x = y;
    y = temp;

}
