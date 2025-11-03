/* Number Pattern 18

5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: "; // n=5;
    cin >> n;
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int val = n - min({i, j, size - 1 - i, size - 1 - j});
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}
