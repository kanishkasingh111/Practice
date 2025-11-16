#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[20];
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Now enter the elements of the array: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Unsorted Array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    for(int i=0;i<n-1;i++)
    {
        int index =i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
                index=j;
        }
        swap(arr[index],arr[i]);
    }
    cout<<"\n";
    cout<<"Sorted Array : ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}