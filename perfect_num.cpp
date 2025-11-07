/*
A perfect number is defined as a positive integer that is equal to the sum of its positive divisors, excluding itself.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num to check : ";
    cin>>n;
    int sum=0,i=1;
    while(i<n)
    {
        if(n%i==0)
        sum+=i;
        i++;
    }
    if(sum==n)     cout<<"It's a perfect number.";
    else   cout<<"It's not a perfect number.";

    return 0;
}