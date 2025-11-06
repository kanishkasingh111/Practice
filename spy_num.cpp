/*
A Spy Number is a number whose sum of digits is equal to its product of digits. 
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num to check : ";
    cin>>n;
    int r,sum=0;
    int prod=1;
    int temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        prod=prod*r;
        n=n/10;
    }
    if(sum==prod) {
        cout<<"It's is a spy number.";
    }
    else {
        cout<<"It's is not a  spy number.";
    }
}