#include <iostream>

using namespace std;

int main()
{
    int tal1, tal2, tal3;
    cout << "Mata in tal 1 ";
    cin >> tal1;
    cout << "Mata in tal 2 ";
    cin >> tal2;
    cout << "Mata in tal 3 ";
    cin >> tal3;
    int temp;
    /* en algoritm som med s�kerhet hittar det st�rsta av de tre inmatade talen */
    if ( tal1 > tal2 ) {
        temp = tal1;
    }
    else {
        temp = tal2;
    }
    if ( tal3 > temp ) {
        temp = tal3;
    }
    cout << "Det st�rsta talet �r " << temp << endl;
    return 0;
}
