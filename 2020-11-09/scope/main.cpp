#include <iostream>
using namespace std;
// Variablers scope eller räckvidd
int main()
{
    if (1==1) {
       int i = 100;
       cout << "i i if-sats " << i << endl;
    }

    int i = 1;

     cout << "i över forsats " << i << endl;

    for (int i=0; i<4; i++) {

    // Om en varabel med samma namn
    // deklarerats innom omslutande
    // måsvingar skrivs den över
    // av variabeln med samma namn
    // innom närmaste måsvingar
        cout << "i i forsats " << i << endl;
    }

        cout << "i under forsats " << i << endl;


    int j = 0;
    while (j < 4)
    {
        // Här finns j, deklarerad utanför
        // måsvingarna

        cout << "j i while-sats " << j << endl;
        j++;
    }

    return 0;
}
