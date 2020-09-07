/*
För att vid en deklaration få göra avdrag för dubbel bosättning krävs det att avståndet till arbetet överstiger 50 km och att arbetet varar högst ett år för ensamstående och tre år för sammanboende. Konstruera ett program som låter användaren mata in aktuella data och som meddelar om användaren har rätt till skatteavdrag eller inte.
*/

#include <iostream>
using namespace std;

int main()
{
    int avstand; // Avsåndet i km mellan bostad och arbetsplats
    int antalPersoner; // Ensamstående = 1, Ej ensamstående != 1
    int antalManader; // Antalet månader arbetet varar
    cout << "Hur långt hemmifrån är din arbetsplats? ";
    cin >> avstand;
    if ( avstand <= 50 ) {
        cout << "Det blir tyvärr inget bidrag för dubbel bosättning, du har inte tillräckligt lång resväg." << endl;
        //return 0;  // Avbryter direkt
    }
    else {
        cout << "Hur många personer är ni i hushållet? ";
        cin >> antalPersoner;
        cout << "Hur många månader kommer du att arbeta på arbetsplatsen? ";
        cin >> antalManader;
        bool ensam = ( ( antalPersoner == 1 ) && ( antalManader <= 12 ) );
        bool flera = ( ( antalPersoner != 1 ) && ( antalManader <= 36 ) );
        if ( ensam || flera ) {
            cout << "Du är berättigad till bidrag för dubbelt boende" << endl;
        }
        else {
            cout << "Det blir tyvärr inget bidrag för dubbel bosättning" << endl;
            if ( antalPersoner == 1 )
                cout << "Arbetet får pågå i högst 12 månader" << endl;
            if ( antalPersoner != 1 )
                cout << "Arbetet får pågå i högst 36 månader" << endl;
        }
    }
    return 0;
}
