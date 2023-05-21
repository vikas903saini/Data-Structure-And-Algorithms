#include<iostream>
using namespace std;
void swapAlt(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
            swap(arr[i],arr[i+1]);
    }
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
int main()
{
    int odd[]={1,2,3,4,5,6,7};
    int even[]={1,3,5,7,9,11};
    swapAlt(odd,7);
    printArray(odd,7);
    swapAlt(even,6);
    printArray(even,6);
    return 0;
}