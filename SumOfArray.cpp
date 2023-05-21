#include<bits/stdc++.h>
using namespace std;
int sumArr(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
        ans+=arr[i];
    return ans;
}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    cout<<"Sum of Array Element : "<<sumArr(arr,size);
    return 0;
}