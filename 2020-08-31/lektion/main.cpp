#include <iostream>

using namespace std;

int main()
{
    system("chcp 1252");
    // Relationsoperatorer, utv�rderas entydigt som sant eller falskt
    // == "lika med"
    // != "Inte lika med"
    // < "Mindre �n"
    // <= "Mindre �n eller lika med"
    // > "St�rre �n"
    // >= "St�rre �n eller lika med"

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
        cout << "Det �r ett" << endl;
        break;
    case 2:
        cout << "Det �r tv�" << endl;
        break;
    case 3:
        cout << "Det �r tre" << endl;
        break;
    default:
        cout << "Ett annat tal" << endl;
    }


    return 0;
}
