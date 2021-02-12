#include <iostream>
using namespace std;
void test(); // Deklarera funktionen
void test2(int); // Deklarera funktionen
// Funktion som omvandlar från Fahrenheit till Celsius
float fahrenheitToCelsius(float);
int main()
{
    /*
    for (int i=0; i<10; i++) {
        cout << i << " ";
    }

    int tal = 2;
    test2(tal);
    */
    float celsius;
    float fahrenheit;
    cin >> fahrenheit;
    celsius =  fahrenheitToCelsius(fahrenheit); // 23,8 Fahrenheit
   /* float fah = 23.8;
    float cel = (fah - 32) / 1.8;
    cout << cel << endl;
    */
    cout << celsius << endl;


    return 0;
}
float fahrenheitToCelsius(float fah)
{
  float cel = (fah - 32) / 1.8;
  return cel;
}
void test2(int heltal)
{
        for (int i=0; i<10; i=i+heltal) {
        cout << i << " ";
    }
}
void test()
{
        for (int i=0; i<10; i++) {
        cout << i << " ";
    }
}
