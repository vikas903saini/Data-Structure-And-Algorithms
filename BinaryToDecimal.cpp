#include<bits/stdc++.h>
using namespace std;
int main()
{
    //code here
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    while(n!=0)
    {
        int digit=n%10;
        if(digit==1)
            ans=pow(2,i) +ans;
        n/=10;
        i++;
    }
    cout<<"Decimal No : "<<ans;
    return 0;
}