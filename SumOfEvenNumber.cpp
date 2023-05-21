#include<bits/stdc++.h>
using namespace std;
int sum_even(int n)
{
    int i=0,sum=0;

    while(i<=n)
    {
        sum+=i;
        i+=2;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Sum of even Number : "<<sum_even(n);
    return 0;
}