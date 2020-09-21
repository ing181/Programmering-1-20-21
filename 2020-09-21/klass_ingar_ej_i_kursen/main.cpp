#include <iostream>
using namespace std;
class Alder {

private:
    // variabeln alder kan bara kommas åt innifrån klassen
    int alder;
public:
    // Public, går att komma åt utanför klassen Alder
    void setAlder ( int years )
    {
        alder = years;  // Här sker tilldelningen
                        // innifrån klassen, av en metod som anropats utifrån
    }

    int getAlder()  // Returnerar innehåller i den privata variabeln alder
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
                   // av klassen Alder. Objekt finns, klasser är ritningar.
				   // Deklareras på samma sätt som en int eller en double eller 
				   // någon annan datatyp.
    cout << "Hur gammal är du? ";
    cin >> myAge;
    myAlder.setAlder ( myAge ); // Metoden setAlder som ingår i klassen Alder används
    cout << myAlder.getAlder(); // Metoden getAlder som ingår i klassen Alder används
    return 0;
}
