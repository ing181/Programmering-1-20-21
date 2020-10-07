#include <iostream>
#include <string>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
/*
Hur man genom att gissa smart kan minska antalet gissningsförsök */
using namespace std;
int main()
{
    int gissa;
    cout << "Antalet sekunder sedan 1 januari 1970 " << time(NULL) << endl;
    srand ( 34 ); //initierar ett startvärde för slumpen.

   // srand ( time ( NULL ) ); //initierar ett startvärde för slumpen.

   for (int i=0; i<25; i++) {
   gissa = ( rand() % 1000 );

   cout << "Slumptal " << i << " är " << gissa << endl;
   }

    return 0;
}



