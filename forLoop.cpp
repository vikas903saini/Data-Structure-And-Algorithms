#include<iostream>
using namespace std;
int main()
{
    //code here 
                   // multiple argument in for loop
    // int n,m;
    // cin>>n>>m;
    // for(int i=0,j=0; i<m&&j<n;i++,j++)
    // {
    //     cout<<" i number : "<<i<<endl;
    //     cout<<" j number : "<<j<<endl;
    // }
                  // No argument in for Loop
    int i=1;
    for(; ;)
    {
        if(i<=5)
            cout<<i<<endl;
        else
            break;
        i++;
    }
    return 0;
}