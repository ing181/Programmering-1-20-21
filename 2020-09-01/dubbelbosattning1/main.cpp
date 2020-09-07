/*
F�r att vid en deklaration f� g�ra avdrag f�r dubbel bos�ttning kr�vs det att avst�ndet till arbetet �verstiger 50 km och att arbetet varar h�gst ett �r f�r ensamst�ende och tre �r f�r sammanboende. Konstruera ett program som l�ter anv�ndaren mata in aktuella data och som meddelar om anv�ndaren har r�tt till skatteavdrag eller inte.
*/

#include <iostream>
using namespace std;

int main()
{
    int avstand; // Avs�ndet i km mellan bostad och arbetsplats
    int antalPersoner; // Ensamst�ende = 1, Ej ensamst�ende != 1
    int antalManader; // Antalet m�nader arbetet varar
    cout << "Hur l�ngt hemmifr�n �r din arbetsplats? ";
    cin >> avstand;
    if ( avstand <= 50 ) {
        cout << "Det blir tyv�rr inget bidrag f�r dubbel bos�ttning, du har inte tillr�ckligt l�ng resv�g." << endl;
        //return 0;  // Avbryter direkt
    }
    else {
        cout << "Hur m�nga personer �r ni i hush�llet? ";
        cin >> antalPersoner;
        cout << "Hur m�nga m�nader kommer du att arbeta p� arbetsplatsen? ";
        cin >> antalManader;
        bool ensam = ( ( antalPersoner == 1 ) && ( antalManader <= 12 ) );
        bool flera = ( ( antalPersoner != 1 ) && ( antalManader <= 36 ) );
        if ( ensam || flera ) {
            cout << "Du �r ber�ttigad till bidrag f�r dubbelt boende" << endl;
        }
        else {
            cout << "Det blir tyv�rr inget bidrag f�r dubbel bos�ttning" << endl;
            if ( antalPersoner == 1 )
                cout << "Arbetet f�r p�g� i h�gst 12 m�nader" << endl;
            if ( antalPersoner != 1 )
                cout << "Arbetet f�r p�g� i h�gst 36 m�nader" << endl;
        }
    }
    return 0;
}
