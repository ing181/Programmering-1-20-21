#include <iostream>
#include <string>
#include <time.h> // F�r tiden
#include <cstdlib> // F�r slumpen
/*
Hur man genom att gissa smart kan minska antalet gissningsf�rs�k */
using namespace std;
int main()
{
    int gissa;
    cout << "Antalet sekunder sedan 1 januari 1970 " << time(NULL) << endl;
    srand ( 34 ); //initierar ett startv�rde f�r slumpen.

   // srand ( time ( NULL ) ); //initierar ett startv�rde f�r slumpen.

   for (int i=0; i<25; i++) {
   gissa = ( rand() % 1000 );

   cout << "Slumptal " << i << " �r " << gissa << endl;
   }

    return 0;
}



