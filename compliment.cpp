#include<bits/stdc++.h>
using namespace std;
int compliment(int x)
{
    int m=x;
    int mask=0;
    while(m){
        mask=(mask<<1)|1;
        m>>=1;
    }
    return (~x) & mask;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Compliment with base 10 is : "<<compliment(n);
    return 0;
}