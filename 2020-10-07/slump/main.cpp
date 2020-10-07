#include <iostream>
#include <string>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
/*
Hur man genom att gissa smart kan minska antalet gissningsförsök */
using namespace std;
int main()
{
    int slump;
    int sek = time(NULL);
    cout << "Antalet sekunder sedan 1 januari 1970 " << sek << endl;
    srand ( sek ); //initierar ett startvärde för slumpen.
    // srand ( time(NULL) ); // samma som rad 10 och 12

   for (int i=0; i<5; i++) {
   // Ett slumptal som ligger mellan
   // 0 och största möjliga slumptal
   // som finns. Beror på din dator.
   cout << "Största slumptalet är " << RAND_MAX << endl;
   cout << rand() << endl; // mellan 0 och 32767

   slump = 1+( rand() % 6 ); // mellan 1 och 6

   cout << "Tärningskast " << i << " är " << slump << endl;
   }

    return 0;
}



