#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int d,a,b,c;
    float r1,r2;
    cout<<"Enter the coefficient a,b,c of the equation ";
    cin>>a>>b>>c;
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        r1=-b/(2*a);
        cout<<"Roots are real and equal"<<r1<<r1;
    }
    else if(d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        cout<<"Roots are real and unequal"<<r1<<r2;
    }
    else
    cout<<"Roots are imaginary"<<r1<<r2;
    return 0;
}