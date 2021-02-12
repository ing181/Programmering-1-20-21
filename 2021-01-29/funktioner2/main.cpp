#include <iostream>
using namespace std;
// Funktion som adderar två tal
// Du skickar med två tal
// ut kommer summan av de två talen
float addera(float, float);
int main()
{
    float x;
    float y;
    cout << "Tal 1: ";
    cin >> x;
    cout << "Tal 2: ";
    cin >> y;
    float summa;
    summa = addera(x,y);
    cout << "summan av " << x << " och " << y << " blir " << summa << endl;

    return 0;
}
float addera(float a, float b)
{
    return (a+b);
}
