#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
    int ans=0;
    while(n)
    {
        int digit=n%10;
        if(n>INT_MAX/10 || n<INT_MIN/10)
            return 0;
            
        ans=ans*10+digit;
        n=n/10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<"reverse number : "<<reverse(n);
    return 0;
}