#include<bits/stdc++.h>
using namespace std;
int fib(int n)
{
    int first=0;
    int second=1;
    int last=0;
    if(n==2)
        return 1;
    if(n==1)
        return 0;
    for(int i=3;i<=n;i++)
    {
        last=first + second;
        first=second;
        second=last;
    }
    return last;
}
int main()
{
    int n;
    cin>>n;
    cout<<" nth no is : "<<fib(n);
    return 0;
}