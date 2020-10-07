#include <iostream>
#include <string>
#include <time.h> // F�r tiden
#include <cstdlib> // F�r slumpen
/*
Hur man genom att gissa smart kan minska antalet gissningsf�rs�k */
using namespace std;
int main()
{
    int slump;
    int sek = time(NULL);
    cout << "Antalet sekunder sedan 1 januari 1970 " << sek << endl;
    srand ( sek ); //initierar ett startv�rde f�r slumpen.
    // srand ( time(NULL) ); // samma som rad 10 och 12

   for (int i=0; i<5; i++) {
   // Ett slumptal som ligger mellan
   // 0 och st�rsta m�jliga slumptal
   // som finns. Beror p� din dator.
   cout << "St�rsta slumptalet �r " << RAND_MAX << endl;
   cout << rand() << endl; // mellan 0 och 32767

   slump = 1+( rand() % 6 ); // mellan 1 och 6

   cout << "T�rningskast " << i << " �r " << slump << endl;
   }

    return 0;
}



