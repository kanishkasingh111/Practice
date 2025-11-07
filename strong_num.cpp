/*
A strong number is defined as a number whose sum of the factorials of its digits equals the original number.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num to check : ";
    cin>>n;
    int temp=n;
    int sum=0;
    while(n>0)
    {   int fact=1;
        int r=n%10;
        n/=10;
        for(int i=1;i<=r;i++)
        {
           fact*=i; 
        }
        sum+=fact;
    }
    if(temp==sum)  cout<<"Strong Number";
    else cout<<"Not a strong number";
}