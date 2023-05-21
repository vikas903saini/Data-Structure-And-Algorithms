#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<"  ";
            space++;
        }
        int start = 1;
        while(start<=i)
        {
            cout<<start<<" ";
            start++;
        }
        int end=i-1;
        while(end)
        {
            cout<<end<<" ";
            end--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}