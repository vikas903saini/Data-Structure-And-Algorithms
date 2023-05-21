#include<iostream>
#include<limits.h>
using namespace std;
int max_No(int arr[],int n)
{
    int ans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>ans)
            ans=arr[i];
    }
    return ans;
}
int min_No(int arr[],int n)
{
    int ans=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<ans)
            ans=arr[i];
    }
    return ans;
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={4,3,-2,0,7};
    cout<<"Max in array : "<<max_No(arr,5)<<endl;
    cout<<"Min in array : "<<min_No(arr,5);
    return 0;
}