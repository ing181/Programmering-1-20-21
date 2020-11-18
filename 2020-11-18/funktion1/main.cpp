#include <iostream>
using namespace std;
// Skriver ut mitt namn och min adress
void minVoid(); // Deklaration
void minUniversellVoid(string, string);
int main()
{
    // utvärde_typ  namn( invarde_typ, invarde_typ, ... );
    // utvärdet void betyder inget utvärde


    minVoid();


    minUniversellVoid("Ingemar Ceicer", "Kalleankas Gata 3");

    string n = "Ingemar Ceicer";
    string a = "Fantomens gata 3";
    minUniversellVoid(n, a);




    return 0;
}

void minVoid()  // Definition
{
    cout << "Ingemar Ceicer" << endl;
    cout << "Bondegatan 88" << endl;
}
void minUniversellVoid(string namn, string adress)
{

    cout << namn << endl;
    cout << adress << endl;
}
