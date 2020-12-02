#include <iostream>
using namespace std;
/*1. Skriv ett program som tar 2 stycken int som invärden.
Funktionens utvärde ska vara det högsta av de två talen.*/
int storst(int x, int y); // Deklaration
int main()
{
    int a, b;
    cout << "Mata in två heltal ";
    cin >> a;
    cin >> b;
    int ut = storst(a, b);
    //cout << "Störst är " << storst(a, b) << endl;
    cout << "Störst är " << ut << endl;
    /*
    if ( a > b){
        cout << "a är störst, =" << a << endl;
    }
    else {
         cout << "b är störst, =" << b << endl;
    }
    */
    return 0;
}
int storst(int x, int y) // Definition
{
    // EX: 4 > 2
    if ( x > y)
    {

        return x; // 4
    }


    return y;

}
