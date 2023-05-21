#include <iostream>
using namespace std;
int main()
{
    // code here
    int n;
    cin >> n;
    int i = 1;
    int count=1;
    while (i <= n)
    {
        int space=1;
        while(space<=n-i)
        {
            cout<<"  ";
            space++;
        }
        int start=space;
        while(start<=n)
        {
            cout<<count++<<" ";
            start++;
        }
    cout << endl;
    i++;
    }
    

    return 0;
}