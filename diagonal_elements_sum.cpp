// Sum of diagonal elements of a matrix 
#include<iostream>
using namespace std;
int main()
{
    int m,n,arr[50][50];
    int left_sum=0,right_sum=0;
    cout<<"Enter the rows and columns of a matrix.";
    cin>>m>>n;
    cout<<"Enter the elements of the matrix ";
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<< "Elements of matrix are "<<arr[i][j] <<endl;
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            left_sum += arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j==n-1)
            right_sum +=arr[i][j];
        }
    }
    cout<<"Left diagonal elements sum is "<<left_sum<<endl;
    cout<<"Right diagonal elements sum is "<<right_sum;


}