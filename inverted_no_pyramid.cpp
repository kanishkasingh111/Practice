/*Inverted Number Pyramid

123454321
 1234321
  12321
   121
    1

*/ 

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n : ";
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=((2*i)+1)/2;k++){
            cout<<k;
        }
        for(int l=i-1;l>=1;l--){
            cout<<l;
        }
        cout<<"\n";
    }
}