#include<iostream>
using namespace std;
int main()
{
    //code here 
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //First Pattern 
        int col1=1;
        while(col1<=n-i+1)
        {
            cout<<col1<<" ";
            col1++;
        }
        //Second Pattern
        int space1=i-1;
        while(space1)
        {
            cout<<"*"<<" ";
            space1--;
        }
        //Third Pattern
        int space2=i-1;
        while(space2)
        {
            cout<<"*"<<" ";
            space2--;
        }
        int col2=n-i+1;
        while(col2>=1)
        {
            cout<<col2<<" ";
            col2--;
        }

    cout<<endl;
    i++;
    }
    return 0;
}