#include <iostream>
using namespace std;
int main()
{
    system ( "chcp 1252" );
    int i;
    // Inmatning av heltal
    cout << "Mata in ett heltal ";
    cin >> i;
    // if else
    if ( i > 2 ) {
        cout << "i �r st�rre �n 2" << endl;
    }
    else
        // == j�mf�relseoperatorn, j�mf�r det som finns till v�nster med det som finns till h�ger
        if ( i == 0 ) {
            cout << "i �r lika med 0" << endl;
        }
        else {
            cout << "i �r inte st�rre �n 2" << endl;
        }

    // N�stlade if-satser
    if ( i > 2 )
        {
            cout << "i �r st�rre �n 2" << endl;
        }
    else
        {
            // N�stlad if-sats
            // == j�mf�relseoperatorn, j�mf�r det som finns till v�nster med det som finns till h�ger
            if ( i == 0 )
                {
                    cout << "i �r lika med 0" << endl;
                }
            else
                {
                    cout << "i �r inte st�rre �n 2" << endl;
                }
        }

    return 0;
}
