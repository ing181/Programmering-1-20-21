#include <iostream>

using namespace std;

int main()
{
    double flyt[3];
    double summa = 0; // M�ste tilldela v�rdet 0 h�r...
    double medel;
    for (int i=0; i<3; i++) {

        cout << "Mata in v�rde " << i+1 << " ";
        cin >> flyt[i];
        summa = summa + flyt[i]; // ...annars har summa ett odifinierat v�rde n�r det anv�nds. ("odifinierat v�rde" + flyt[i] kan bli vad som helst) 
    }

    medel = summa/3;

    cout << "Medelv�rdet av de inmatade talen �r " << medel << endl;




    return 0;
}
