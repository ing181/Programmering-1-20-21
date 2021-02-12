#include <iostream>
using namespace std;
//Skriv ett program där användaren matar in vikten på ett brev. Programmet ska beräkna kostnaden att
//skicka brevet. En funktion ska användas för beräkningen.
// Om utskriften görs i funktionen behöver du inte ha något returvärde tillbaka.
// i så fall använder du returvärdet "void" som betyder "inget returvärde"
void minFunktion(int a);
// Du kan göra på ett annat sätt, ingen utskrift i funktionen.
// Då behöver du skicka tillbaka ett värde som funktionen
// räknat ut till huvudprogrammet.
int minFunktion2(int a);

int main()
{
  //  system ("chcp 1252");

    int a; //Vikten som användare bestämmer
    int b; // Hur mycket kostar vikten

    cout <<"skriva in hur mycket vikt är din brev"<< endl;
    cin >> a;

    // Här anväder du funktionen
    minFunktion( a);

    // här använder du funktionen med returvärde
    int kostar = minFunktion2(a);
    cout  << " Din brev kostar " << kostar << " Kr" << endl;

    // Det här kan du ju ta bort. Uträkningen sker i funktionen
   // cout << "Din brev kostar"<< b << endl;
   // cin >> b;

    return 0;
}
 void minFunktion( int a)
{

    if ( a <= 20 )
    {
        cout  << " Din brev kostar 8 Kr" << endl;
    }
    else if ( (a > 20) && (a < 100) )
    {
        cout << " Din brev kostar 38 Kr" << endl;
    }
    else if ( a >= 100 )
    {
        cout << " Din brev kostar 67 Kr " << endl;
    }
    // void, därför inget returvärde
    // return a;
}

 int minFunktion2( int a)
{

    int kostnad;
    if ( a <= 20 )
    {
        kostnad = 8;
    }
    else if ( (a > 20) && (a < 100) )
    {
        kostnad = 38;
    }
    else if ( a >= 100 )
    {
       kostnad = 67;
    }

     return kostnad;
}
