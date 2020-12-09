#include <iostream>
using namespace std;
// kap. 4
int main()
{
    if ( 1>2 )
    {
        cout << "Sant 1" << endl;

    }
    else if (5<4)
    {

        cout << "Sant 2" << endl;
    }
    else
    {

        cout << "Bara else" << endl;
    }

    // Med nestlade if-satser

    if ( 1>2 )
    {
        cout << "Sant 1" << endl;

    }
    else
    {

        if (5<4)
        {
            cout << "Sant 2" << endl;
        }
        else
        {

            cout << "Bara else" << endl;
        }
    }


    // Switch bara med heltal int och char
    int tal = 88;
    switch (tal)
    {

    case 1:
        cout << "ett" << endl;
        break;
    case 2:
        cout << "tva" << endl;
        break;
    case 3:
        cout << "tre" << endl;
        break;
    case 4:
        cout << "fyr" << endl;
        break;
    default:
        cout << "Hittar inte" << endl;

    }



    return 0;
}
