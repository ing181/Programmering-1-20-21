#include <iostream>
#include <iomanip>
using namespace std;
// Prova med olika stor befolkning från början
// Det tar alltid lika många år för en fördubbling
// vid en viss procent konstant tillväxt.
int dubbladBefolkning(double befolkning, float procent);
int main() {
    double start;
    cout << "Mata in nuvarande befolkningsmängd ";
    cin >> start;
    float procent;
    cout << "Mata in den konstanta befolkningstillväxten i procent ";
    cin >> procent;
    int ar = dubbladBefolkning(start, procent);

    cout << "Befolkningen kommer att vara dubbelt så stor efter " << ar << " år" << endl;
    return 0;
}

int dubbladBefolkning(double befolkning, float procent) {
    procent = procent/100;
    procent = procent + 1;
    // cout << procent << endl;
    double stopp = befolkning * 2;
    int i = 0;
    while (befolkning < stopp) {
        befolkning = befolkning * procent;
        i++;
       // cout << fixed << "efter "  << i << " år är befolkningsmängden " << befolkning << endl;
    }

    return i;
}


