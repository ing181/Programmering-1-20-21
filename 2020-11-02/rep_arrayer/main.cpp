#include <iostream>
using namespace std;
int main()
{

    int f[] = {4, -1, 3, 2, 7};

    for ( int i=0; i<5; i++ )
    {
        cout << f[i] << " ";
    }


    int f[5];

    for ( int i=0; i<5; i++ )
    {
        cout << "Mata in tal på index " << i << " ";
        cin >> f[i];
    }
    for ( int i=0; i<5; i++ )
    {
        cout << f[i] << " ";
    }


    bool b = true;
    int i = 0;
    while (b) {

     cout << i << " " << b << endl;

    i = i + 3;
    if ( (i>4) ) {
        b = false;
       }
    }

    int val;
    do {

        cout << "Välg 1" << endl;
        cout << "Välg 2" << endl;
        cout << "Välg 3 för att avsluta" << endl;
        cin >> val;
    } while ( val != 3 );

    return 0;
}
