#include <iostream>
#include <string>
#include <time.h> // För tiden
#include <cstdlib> // För slumpen
/*
Hur man genom att gissa smart kan minska antalet gissningsförsök */
using namespace std;
int main()
{
    cout << "Antalet sekunder sedan 1 januari 1970 " << time(NULL) << endl;
    srand ( time ( NULL ) ); //initierar ett startvärde för slumpen.
    int hemligtTal = ( rand() % 1000 ); // 0 - 999
    cout << "The secret number " << hemligtTal << endl;
    int gissa;
    int antalGiss = 0;
    const int maxTal = 999;
    int upper = 999;
    int lower = 0;
    cout << "Guess a number between 0 and " << maxTal << " ";
    cin >> gissa;
    do {
        antalGiss++;
        if ( gissa < hemligtTal ) {
            cout << "Guess number " << antalGiss << ". You guessed number " << gissa << " Too small, guess again" << endl;
            lower = gissa;
            gissa = lower + ( rand() % (upper-lower) );
        }
        else
            if ( gissa > hemligtTal ) {
                cout << "Guess number " << antalGiss << ". You guessed number " << gissa << " Too big, guess again" << endl;
                upper = gissa;
                gissa = lower + ( rand() % (upper-lower) );
            }
       // gissa = ( rand() % 1000 );
    }
    while ( hemligtTal != gissa );
    cout << "You guessed right! " << gissa << " it is"  << endl;
    return 0;
}



