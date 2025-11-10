#include<iostream>
using namespace std;
int main()
{
    int arr[50],n,key,flag=0;
    cout<<"Enter the no. of elements:\n";
    cin>>n;
    cout<<"Enter the list of elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element to search: \n";
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<key<<" is available at "<<i+1;
            flag =1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<key<<"is not available in the list ";
    }
    return 0;
}