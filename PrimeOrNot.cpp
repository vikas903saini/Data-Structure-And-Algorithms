#include<bits/stdc++.h>
using namespace std;
bool check_prime(int n)
{
    int i=2;
    while(i<n)
    {
        if(n%i==0)
            return false;
        i+=1;
    }
    return true;
}
int main(){
    int n;
    cin>>n;

    if(check_prime(n))
        cout<<"Prime";
    else 
        cout<<"Not Prime";
    return 0;
}