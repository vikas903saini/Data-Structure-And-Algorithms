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
        int j = 1;
        while (j <= i)
        {
            cout<<count++<<" ";
            j++;
        }
        cout << endl;
    i++;
    }
    

    return 0;
}