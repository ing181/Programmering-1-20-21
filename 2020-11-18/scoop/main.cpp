#include <iostream>
using namespace std;
// Om variablers räckvidd
//  "Det som finns i main stannar i main"
//  "Det som finns i funktionen stannar i funktionen"
void tal(int);
int main()
{
    int y = 5;
    tal(y);
   cout << y << endl;

    return 0;
}
void tal(int y)
{
    cout << y << endl;
    y = 10;

}
