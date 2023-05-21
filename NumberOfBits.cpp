#include<iostream>
using namespace std;
int num(int n)
{
    int count=0; 
    while(n!=0)
    {
        if(n&1)
            count++;
        n>>=1;
    }
    return count;
}
int main()
{
    //code here 
    int n;
    cin>>n;
    cout<<"number of bits : "<<num(n)<<endl;
    return 0;
}