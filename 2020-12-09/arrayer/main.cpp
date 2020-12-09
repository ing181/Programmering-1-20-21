#include <iostream>
using namespace std;
// arrayer
int main()
{
    int m1 = 0;
    int m2 = 1;
    int m3 = 2;
    // med array
    int M[3]; // 3 int variabler med samma namn
    // använd så här: Samma namn olika index
    M[0] = 0;
    M[1] = 1;
    M[2] = 2;

    int summa = 0;
    for (int i=0; i<3; i++) {

       summa = (summa + M[i]);

    }

    cout << "Summan " << summa << endl;



    return 0;
}
