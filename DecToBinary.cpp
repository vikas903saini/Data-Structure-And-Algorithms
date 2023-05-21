#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    //code here
    int n;
    cin>>n;
    int i=0,ans=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=(bit*pow(10,i))+ans; 
        n>>=1;
        i++;
    }   
    cout<<"binary no : "<<ans;
    return 0;
}