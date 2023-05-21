#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n;
    cin>>n;
    int power=0;
    for(int i=0;i<=30;i++)
    {
        power=2*power;
        if(n==power){
            cout<<"yes "<<endl;
            return 0;
        }   
    }
    cout<<"no "<<endl;
    return 0;
}