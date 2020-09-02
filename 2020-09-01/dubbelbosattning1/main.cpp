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
        return 0;  // Avbryter direkt
    }
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
    return 0;
}
