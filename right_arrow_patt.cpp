/* Right Arrow j Pattern
*****
  ****
    ***
      **
        *
      **
    ***
  ****
*****


 */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    // 🔹 Upper part
    for (int i = 0; i < n; i++)
    {   
        for(int gap = 0; gap < 2 * i; gap++){
            cout << " ";
        }
        for (int j = i; j < n; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    // 🔹 Lower part
    for (int i = n - 2; i >= 0; i--) {   
        for (int gap = 0; gap < 2 * i; gap++) {
            cout << " ";
        }
        for (int j = i; j < n; j++) {     
            cout << "*";
        }
        cout << "\n";
    }
}