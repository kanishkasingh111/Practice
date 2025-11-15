#include<iostream>
using namespace std;
int main()
{
    int arr[30];
    int n;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Now enter the elements of the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Unsorted Array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    for(int i=n-2;i>=0;i--)
    {   
        bool swapped=0;
        for(int j=0;j<=i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swapped=1;
                swap(arr[j],arr[j+1]);
            }
        }
        if(swapped==0)
        break;
    } 
    cout<<"\n";
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}