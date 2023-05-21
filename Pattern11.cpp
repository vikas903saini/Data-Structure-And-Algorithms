#include <iostream>
using namespace std;
int main()
{
    // code here
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
       int j=i-1;
       while(j)
       {
        cout<<" ";
        j--;
       }
       int start=i;
       while(start<=n)
        {
            cout<<i;
            start++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}