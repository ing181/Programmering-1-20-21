#include <iostream>
using namespace std;
/* for loop */
int main() {
    for (int i=0,j=10; i<10; i++,j--) {


        if ( (i==2) || (j==2))
        {
            cout  << "Nu är i eller j 2!" << endl;
            //break;
            continue;
        }

        cout << "i = " << i << " j = " << j << endl;
    }
    return 0;
}
