// 69.Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.

#include <iostream>
using namespace std;

int mysqrt(int x){
    if(x<2)
    return x;
    int start=0,end=x,mid,ans;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if(mid*mid==x)        //mid==x/mid
        {
            ans=mid;
            break;
        }
        else if(mid*mid<x){     //mid<x/mid
            ans=mid;
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return ans;
    }
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Square root: " << mysqrt(x) << endl;
    return 0;
}