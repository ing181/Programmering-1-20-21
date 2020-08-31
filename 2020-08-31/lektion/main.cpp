#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    // Relationsoperatorer, utvärderas entydigt som sant eller falskt
    // == "lika med"
    // != "Inte lika med"
    // < "Mindre än"
    // <= "Mindre än eller lika med"
    // > "Större än"
    // >= "Större än eller lika med"

    if ( 1 <= 1 ){

            cout << "SANT 1" << endl;
    }

    // Logiska operatorer
    // && "Och"
    // || "Eller"

    if ( (1<2) && (2>1) ){
         cout << "SANT 2" << endl;
    }

    if (1<2) {

        if (2>1)
        {
           cout << "SANT";
        }

    }

    // switch
    int tal = 4;
    switch (tal)
    {
    case 1:
        cout << "Det är ett" << endl;
        break;
    case 2:
        cout << "Det är två" << endl;
        break;
    case 3:
        cout << "Det är tre" << endl;
        break;
    default:
        cout << "Ett annat tal" << endl;
    }


    return 0;
}
