#include <iostream>
using namespace std;
// Funktion med referensparametrar
void minFunk(int &a);
int main()
{
    int a = 4;
    cout << "Före funk. " << a << endl;
    minFunk(a);
    cout << "Efter funk. " << a << endl;
    return 0;
}
void minFunk(int &x)
{
    cout << "i funk. 1 " << x << endl;
    x = 7;
    cout << "i funk. 2 " << x << endl;
}
