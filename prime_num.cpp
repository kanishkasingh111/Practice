#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the num to check : ";
    cin>>n;
    int i=1,count=0;
    while(i<=n)
    {
       if(n%i==0)
       count+=1;
       i++;   
    }
    if(count==2)  cout<<"It's a prime number.";
    else   cout<<"It's not a prime number.";

    return 0;
}