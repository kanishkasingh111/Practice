/* Diamond Star Pattern
     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *

 */

// Method 1 :

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter n : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << "*";
//         }
//         for (int l = 1; l < i; l++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
//     for (int i = n - 1; i >= 1; i--)
//     {
//         for (int j = 1; j <= n - i; j++)
//         {
//             cout << " ";
//         }
//         for (int k = 1; k <= (2 * i) - 1; k++)
//         {
//             cout << "*";
//         }
//         cout << "\n";
//     }
// }



// Method 2 :

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    // Upper half
    for (int i = 1; i <= (n / 2) + 1; i++)
    {
        for (int j = 1; j <= (n / 2 + 1) - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    // Lower half
    for (int i = (n / 2); i >= 1; i--)
    {
        for (int j = 1; j <= (n / 2 + 1) - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i) - 1; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}
