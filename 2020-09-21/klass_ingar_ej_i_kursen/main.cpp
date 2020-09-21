#include <iostream>
using namespace std;
class Alder {

private:
    // variabeln alder kan bara kommas �t innifr�n klassen
    int alder;
public:
    // Public, g�r att komma �t utanf�r klassen Alder
    void setAlder ( int years )
    {
        alder = years;  // H�r sker tilldelningen
                        // innifr�n klassen, av en metod som anropats utifr�n
    }

    int getAlder()  // Returnerar inneh�ller i den privata variabeln alder
    {
        return alder;
    }
};

int main()
{
    cout << "Hello world!" << endl;
    int myAge;
    Alder myAlder; // En instans av, "en Alder" deklareras
                   // Se klassen som en ritning, du skapar ett objekt
                   // av klassen Alder. Objekt finns, klasser �r ritningar.
				   // Deklareras p� samma s�tt som en int eller en double eller 
				   // n�gon annan datatyp.
    cout << "Hur gammal �r du? ";
    cin >> myAge;
    myAlder.setAlder ( myAge ); // Metoden setAlder som ing�r i klassen Alder anv�nds
    cout << myAlder.getAlder(); // Metoden getAlder som ing�r i klassen Alder anv�nds
    return 0;
}
