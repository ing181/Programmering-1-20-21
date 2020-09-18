#include <iostream>

using namespace std;

int main()
{
    int talfalt[3];
    for (int i=0; i<5; i++)
    {
		// Aj aj! Vi tilldelar här värden till platser som inte finns!
		// talfalt med index 0, 1 och 2 finns
		// Vi försöker tilldela värden till platserna (index) 3 och 4. De finns inte.
        talfalt[i] = i;
    }

    for (int i=0; i<5; i++)
    {
		// Här skriver vi ut innehållet i platserna 0 - 4, utskriften
        cout << talfalt[i] << endl;
    }

    return 0;
}
