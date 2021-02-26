#include <iostream>
using namespace std;
void funktionA();
void meny();
int funktionB();
int main()
{
    meny();
    return 0;
}


void meny()
{
    char val; // Deklarerar en char variabel.
    do
    {
        cout << "Välj A (A)" << endl;
        cout << "Välj B (B)" << endl;
        cout << "Välj C (C)" << endl;
        cout << "Välj a för att avbryta (a)" << endl;
        cin >> val;

        if (val=='A')
        {
            funktionA();
        }
        else if (val=='B')
        {

           cout << funktionB() << endl;
        }
    }
    while (val != 'a');
}
void funktionA()
{
    cout << "Du valde alternativ A" << endl;
}
int funktionB()
{
    return 55;
}
