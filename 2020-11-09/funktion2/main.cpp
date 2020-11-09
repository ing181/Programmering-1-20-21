#include <iostream>
using namespace std;
// Funktion som adderar två heltal
// och returnerar summan
int addera(int a,int b); // Funktionsdeklaration
int main()
{
    int tal1, tal2;
    cout << "Addera två heltal" << endl;
    cout << "Tal 1 ";
    cin >> tal1;
    cout << "Tal 2 ";
    cin >> tal2;
    int summa;
    summa = addera(tal1,tal2);
    cout << "Summan av de två talen är " << summa << endl;

    return 0;
}
int addera(int a,int b) // Funktionsdefinition
{
    return (a + b);

}

