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
        int j = 1;
        int value=i;
        while (j <= i)
        {
            cout<<value++<<" ";
            j++;
        }
        cout << endl;
    i++;
    }
    

    return 0;
}