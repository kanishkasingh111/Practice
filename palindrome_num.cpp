/*
A palindromic number is a number that remains the same when its digits are reversed.
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num to check : ";
    cin>>n;
    int temp=n;
    int reverse=0;
    while(temp>0)
    {
        int rem=temp%10;
        reverse =(reverse*10)+rem;
        temp=temp/10;
    }
    if(n==reverse)     cout<<"It's a palindrome number.";
    else   cout<<"It's not a palindrome number.";

    return 0;
}