#include <iostream>
using namespace std;
// Hitta minsta talet
int main()
{
    // Tilldelar alla v�rden n�r
    // arrayen skapas
    int falt[5] = {22,4,-5,89,9};
	// Kan man bara g�r n�r den skapas
    int temp=falt[0]; // temp f�r f�rsta v�rdet i arrayen (22)
    for (int i=1; i<6; i++ )
    {
	   // i startar med v�rdet 1 och forts�tter t.0.m. 6
       if ( falt[i] < temp ) { // Kollar om det finns ett mindre tal
            temp = falt[i]; // i s� fall f�r temp det nya, l�gre v�rdet
       }
    }
    // Efter att systematisk ha unders�kt alla index
	// i arrayen falt vet vi med s�kerhet att temp
	// inneh�ller det l�gsta talet
    cout << "L�gst �r " << temp << endl;




    return 0;
}
