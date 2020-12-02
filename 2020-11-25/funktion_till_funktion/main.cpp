#include <iostream>
using namespace std;
void funktion1(int &a);
void funktion2(int a);
void funktion3(int a);
int main()
{
    int tal = 8;
    funktion1(tal);
    cout << "tal, värde i huvudprogrammet " << tal << endl;
    return 0;
}
// Här skickas invärdet som referens
// Altså är "tal" i huvudprogrammet
// och "x" i funktionen "funktion1(int &x)"
// samma variabel, med olika namn.
void funktion1(int &x)
{
    x=100;
    funktion2(x);
}
void funktion2(int y)
{
    y = y*3;
    funktion3(y);
}
void funktion3(int z)
{
    cout << "z, värde i funktion3() " << z << endl;
}
