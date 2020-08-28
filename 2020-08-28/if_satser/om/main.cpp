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
        cout << "i är större än 2" << endl;
    }
    else
        // == jämförelseoperatorn, jämför det som finns till vänster med det som finns till höger
        if ( i == 0 ) {
            cout << "i är lika med 0" << endl;
        }
        else {
            cout << "i är inte större än 2" << endl;
        }

    // Nästlade if-satser
    if ( i > 2 )
        {
            cout << "i är större än 2" << endl;
        }
    else
        {
            // Nästlad if-sats
            // == jämförelseoperatorn, jämför det som finns till vänster med det som finns till höger
            if ( i == 0 )
                {
                    cout << "i är lika med 0" << endl;
                }
            else
                {
                    cout << "i är inte större än 2" << endl;
                }
        }

    return 0;
}
