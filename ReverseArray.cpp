#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}
int main()
{
    int size;
    cout<<"enter size of array : ";
    cin>>size;
    int arr[100];
    cout<<endl<<"enter array element : ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    reverse(arr,size);
    cout<<endl<<"Reverse array : ";
    printArray(arr,size);
    return 0;
}