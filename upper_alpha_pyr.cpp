/* Upper Alphabet Pyramid Pattern

ABCDEFEDCBA
ABCDE EDCBA
ABCD   DCBA
ABC     CBA
AB       BA
A         A

 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {   
        for (int j = 1; j <=n-i; j++)
        {
            cout << char(j+64);
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << " ";
        }
        for(int l=n-i;l>=1;l--)
        {

            cout<< char(l+64);
        }
        cout << "\n";
    }
}