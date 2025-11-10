#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key) {
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        int mid=(start+end)/2;
        // mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
            break;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}

int main()
{   
    int n,arr[30];
    int key;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter key :";
    cin>>key;

    cout<<BinarySearch(arr,n,key);
    return 0;
}