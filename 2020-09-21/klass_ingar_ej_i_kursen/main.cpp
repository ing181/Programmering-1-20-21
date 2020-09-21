#include <iostream>

using namespace std;

class Alder {

    private:
    int alder;
    public:
    void setAlder(int years) {
        alder = years;
    }

        int getAlder() {
        return alder;
    }


};

int main()
{
    cout << "Hello world!" << endl;
    int myAge;
    Alder myAlder;

    cout << "Hur gammal är du? ";
    cin >> myAge;
    myAlder.setAlder(myAge);
    cout << myAlder.getAlder();

    return 0;
}
