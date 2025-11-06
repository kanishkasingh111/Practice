/*
Magic No. : A number is said to be a magic number, if the sum of its digits are calculated till a single digit recursively by adding the sum of the digits after every addition. If the single digit comes out to be 1,then the number is a magic number.
*/  

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num to check : ";
    cin>>n;
    while(n>9)
    { 
        int sum=0;
        while(n!=0)
        {
        int r=n%10;
        sum += r;
        n=n/10;
        }
        n=sum;
    }
    if(n==1)  cout<<"Magic number";
    else  cout<<"Not a magic number";
}