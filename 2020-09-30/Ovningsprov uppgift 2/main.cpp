#include <iostream>
using namespace std;
// Hitta minsta talet
int main()
{
    // Tilldelar alla värden när
    // arrayen skapas
    int falt[5] = {22,4,-5,89,9};
	// Kan man bara gör när den skapas
    int temp=falt[0]; // temp får första värdet i arrayen (22)
    for (int i=1; i<6; i++ )
    {
	   // i startar med värdet 1 och fortsätter t.0.m. 6
       if ( falt[i] < temp ) { // Kollar om det finns ett mindre tal
            temp = falt[i]; // i så fall får temp det nya, lägre värdet
       }
    }
    // Efter att systematisk ha undersökt alla index
	// i arrayen falt vet vi med säkerhet att temp
	// innehåller det lägsta talet
    cout << "Lägst är " << temp << endl;




    return 0;
}
