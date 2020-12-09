#include <iostream>
using namespace std;
// Alla varibler som man vill använda måste skapas när man
// kompilerar.
// Programmet måste boka plats i minnet
// Allokera plats för alla variabler.
void befolkaFalt(int f[],int antal);
int main()
{
    int falt[10000]; // Fler en vad som behövs
    int antal; // 1 int tar 4 byte, 32 bitar
    cout << "Hur många tal vill du mata in? ";
    cin >> antal;
    befolkaFalt(falt,antal);

    // int falt[antal]; FEL!

    for (int i=0; i<antal; i++) {

        cout << falt[i] << " ";
    }

    return 0;
}
void befolkaFalt(int f[],int antal)
{
    for (int i=0; i<antal; i++) {

        cin >> f[i];
    }
}
