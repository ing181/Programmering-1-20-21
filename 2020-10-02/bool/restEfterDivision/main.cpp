#include <iostream>
using namespace std;
/* Räkneoperatorer 7.1, sidan 62 */
int main()
{
    int a = 3, b = 4;
    int heltalsdelen;
    heltalsdelen = b / a; // Division med datypen int
    cout << heltalsdelen << endl;
    // 1, resten klipps bort, kastas bort
    int rest;
    rest = b % a;
    cout << rest << endl;
    cout << heltalsdelen << "+" << rest << "/" << a << endl;
    return 0;
}
