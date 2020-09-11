// Uppgift 1
#include <iostream>
using namespace std;
int main()
{
    int tal;
    cout << "Mata in ett heltal ";
    if (tal < 0) {
           cout << "Mindre än noll" << endl;
    }
    else if ( tal > 0) {
            cout << "Större än noll" << endl;
    }
    else {
            cout << "Lika med noll" << endl;
    }


    return 0;
}
