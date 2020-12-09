#include <iostream>
using namespace std;
// kap. 3
int main()
{
    bool b = ( 1 > 2 );
    if ( b )
    {
        cout << "HEJ" << endl;
    }

    // Numeriska operatorer
    // + - * / %
    int heltal = 7 / 2;
    cout << heltal << endl; // 1
    int rest = 3 % 2;
    cout << rest << endl; // 1


    float flyttal = 3.0 / 2.0;
    cout << flyttal << endl;

    // char
    char tecken = 65;
    cout << tecken << endl;
    char tecken2 = 'A';
    tecken2++;
    cout << tecken2 << endl;

    // Konstanter
    const float PI = 3.14;
    // PI = 4.14; // Går inte att ändra

    // Inmatning
    cin >> tecken; // Förväntar sin ett enda tecken
    cout << tecken << endl; //

    string s;
    cin >> s;
    s = "Hejsan";


    return 0;
}
