#include <iostream>

using namespace std;

int main()
{
    double flyt[3];
    double summa = 0; // Måste tilldela värdet 0 här...
    double medel;
    for (int i=0; i<3; i++) {

        cout << "Mata in värde " << i+1 << " ";
        cin >> flyt[i];
        summa = summa + flyt[i]; // ...annars har summa ett odifinierat värde när det används. ("odifinierat värde" + flyt[i] kan bli vad som helst) 
    }

    medel = summa/3;

    cout << "Medelvärdet av de inmatade talen är " << medel << endl;




    return 0;
}
