#include<iostream>
using namespace std;
int findUnique(int *arr, int size)
{
    //Write your code here
    int ans=0;
    for(int i=0;i<size;i++)
        ans^=arr[i];
    return ans;
}
int main()
{
    int arr[]={2,2,3,3,4};
    cout<<"Unique Element : "<<findUnique(arr,5);
    return 0;
}