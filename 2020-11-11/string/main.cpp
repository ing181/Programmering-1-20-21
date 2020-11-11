#include <iostream>
#include <string>
using namespace std;
// string
int main() {
    char tecken = 'k';
    string s = "Hej du!";
    cout << s << endl;
    for (int i=0; i<7; i++) {

        cout << s[i];
    }
    cout << endl;

    cout << s.size() << endl;
    int storlek = s.size();



    return 0;
}
