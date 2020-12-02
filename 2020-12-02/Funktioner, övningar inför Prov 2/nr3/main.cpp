#include <iostream>
using namespace std;
/*
3. Skriv en funktion som tar en float array som invärde. Funktionen gör all
positiva värden i arrayen negativa och alla negativa värden positiva
när arryen skrivs ut i huvudprogrammet.
EX:
int falt = {1, -2, 3, -4};
Efter funktionen
-1, 2, -3, 4
*/
void funktion(float falt[],int antal);
int main()
{
    float arr[4] = {-3.4, 55, -4, 5.34};

    /*
    for (int i=0; i<4; i++) {

        arr[i] = (arr[i] * -1);
    }
    */
    funktion(arr,4);
    for (int i=0; i<4; i++) {
            cout << arr[i] << " ";
    }

    return 0;
}
void funktion(float falt[],int antal)
{
        for (int i=0; i<antal; i++) {

        falt[i] = (falt[i] * -1);
    }
}
