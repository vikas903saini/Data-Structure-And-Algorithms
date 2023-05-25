#include <bits/stdc++.h>
using namespace std;
int Duplicate(int *arr, int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
        ans^=arr[i];
    for(int i=1;i<size;i++)
        ans^=i;
    return ans;
}
int main()
{
    int arr[] = {1, 2, 4, 4, 3};
    cout << "Duplicate element : " << Duplicate(arr, 5);
    return 0;
}