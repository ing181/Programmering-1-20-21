#include <iostream>
using namespace std;
// loop
int main()
{

    // while
    // startvärde: i=0
    // villkor: i<5
    // förändring: 1=1+2
    int i = 0;
    while (i<5)
    {
        cout << "sats 1" << endl;

        cout << "sats 2" << endl;
        i=i+2;
    }

    // do while
    // startvärde: i=0
    // villkor: i<5
    // förändring: 1=1+2
    i = 5;
    do
    {
        cout << "sats 1" << endl;

        cout << "sats 2" << endl;
        i=i+2;
    }
    while (i<5);
// for
    // startvärde: i=0
    // villkor: i<5
    // förändring: 1=1+2
    for (int i=0; i<5; i=i+2)
    {
        cout << "sats 1 for-loopen" << endl;
        cout << "sats 2 for-loopen" << endl;
    }


    return 0;
}
