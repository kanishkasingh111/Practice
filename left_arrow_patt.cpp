/* Left Arrow Star Pattern
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
    int mid=(n+1)/2;
    //Upper Part
    for (int i = 1; i <= mid; i++)
    {
        for (int j = 1; j <= mid-i; j++) {
            cout << " ";
        }
        for(int k=i;k<=mid;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    //Lower part
     for (int i = mid+1; i <= n; i++)
    {
        for (int j = 1; j <=i-mid; j++) {
            cout << " ";
        }
        for(int k=mid;k<i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}


