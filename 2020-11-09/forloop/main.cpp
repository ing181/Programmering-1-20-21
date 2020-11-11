#include <iostream>
using namespace std;
// for loop
int main()
{
    int i = 0; // startvärde
    while ( i < 5 ) { // vilkor

        cout << "I while-loop " << i << endl;
        i++; // förändring
    }
    // i = 0;
    while ( i < 5 ) { // vilkor

        cout << "I while-loop " << i << endl;
        i++; // förändring
    }

    /*
    for (startvärde; vilkor; föröndring){

    }*/

    for (int i=0; i<5; i++){
        cout << "I for-loop " << i << endl;
    }

    for (int i=0; i<5; i++){
        cout << "I for-loop " << i << endl;
    }

    return 0;
}
