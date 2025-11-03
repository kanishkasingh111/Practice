/* Staircase Pattern 
*
**
***
    *
    **
    *** 
        *
        **
        ***

 */

#include <iostream>
using namespace std;

int main() {
    int groups = 3;   
    int lines = 3;    
    int gap = 0;

    for (int g = 0; g < groups; g++) {
        for (int i = 1; i <= lines; i++) {
            for (int s = 0; s < gap; s++) {
                cout << " ";
            }
            for (int j = 0; j < i; j++) {
                cout << "*";
            }
            cout << endl;
        }
        gap += 4;
    }

    return 0;
}
