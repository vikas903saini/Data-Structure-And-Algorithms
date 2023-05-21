#include<bits/stdc++.h>
using namespace std;
bool linear_search(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==key)
            return true;
    }
    return false;
}
int main()
{
    int size,key;
    cout<<"enter size of array : ";
    cin>>size;
    cout<<"enter a key to find it : ";
    cin>>key;
    int arr[100];
    cout<<endl<<"enter array element : ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    if(linear_search(arr,size,key))
        cout<<"element found ";
    else 
        cout<<"element not found ";
    return 0;
}