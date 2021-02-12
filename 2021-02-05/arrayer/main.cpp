#include <iostream>
using namespace std;
// Array
int main()
{
    int ar[10000];
    int a1 = 0;
    int a2 = 1;

    int a10000 = 10000;

    ar[1] = 7;
    int p = 7;
    p = 45;
    p = -66;

    for (int i=0; i<10000; i++)
    {
        ar[i] = i;        // 0 1 2
        /*
        ar[0] = 0;
        ar[1] = 1;
        ar[2] = 2;
        */
    }
    ar[1] = 999;
    for (int i=0; i<10000; i++)
    {
        cout << ar[i] << " ";
        /*
        ar[0] = 0;
        ar[1] = 1;
        ar[2] = 2;

        ar[9999] = 10000;
        */
    }
    // Klart

    return 0;
}
