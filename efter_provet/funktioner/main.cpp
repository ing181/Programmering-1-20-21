#include <iostream>

using namespace std;
// Konverterar celsius till farenheit
float celsiusToFarenheit(float cel);
int main()
{
    /*
    float c;
    cout << "Grader i Celsius" << endl;
    cin >> c;
     float f = celsiusToFarenheit(c);
     cout << "Motsvaras av " << f << " grader Farenheit" << endl;
     */
     int i = 4;
     int *ip = &i;
     cout << "Hur många platser? ";
     int platser;
     cin >> platser;
    // int falt[platser];
    int *falt;
    falt = new int[platser];
     cout << ip << endl;



    return 0;
}
float celsiusToFarenheit(float cel)
{
    float far;
    far = (cel-32)/5*9;
    return far;
}
