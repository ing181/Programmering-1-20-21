#include <iostream>
// Finktion med referensparametrar
void test(int &a, float &f);
using namespace std;
int main()
{
    int x = 1;
    float f = 2;
    test(x, f);
    cout << "x = "<< x <<  endl;
    cout << "f = "<< f <<  endl;
    return 0;
}
// Fördel: Kan påverka flera variabler
// som finns i programmet
// Mindre data kopieras, prstandafördel.

// Nackdel: Kan (oavsiktligt) påverka flera variabler
// som finns i programmet
// Det blir mindre inkapsling av data.
void test(int &a, float &f)
{
    a = 10;
    f = 20;
}
