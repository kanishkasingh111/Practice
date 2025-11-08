/*

*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num to check : ";
    cin>>n;
    int temp=n;
    int sum=0,digits=0;
    int t = n;
    while (t > 0) 
    {
        digits++;
        t /= 10;
    }
    while(temp>0)
    {
        int rem=temp%10;
        int power = 1;
        for (int i = 0; i < digits; i++) 
        {
            power *= rem;
        }
        sum+=power;
        temp/=10;  
    }
    if(n==sum)     cout<<"It's an armstrong number.";
    else   cout<<"It's not an armstrong number.";

    return 0;
}