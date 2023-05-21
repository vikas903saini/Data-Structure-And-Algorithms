#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cout << " Enter a Characters : " << endl;
    cin >> ch;
    int n;
    if (ch == 'P')
        n = 1;
    else
        n = 2;
    switch (ch)
    {
    case 'v':
        cout << "Name is Vikas.";
        break;
    case 'p':
        switch (n)
        {
        case 2:{
            cout << "Name is Priyanka.";
            break;
        }
        case 1:
            cout << "Name is PremLata";
            break;
        }
        break;
    case 'n':
        cout << "Name is Naresh Kumar.";
        break;
    case 'a':
        cout << "Name is Aakash.";
        break;
    default:
        cout << "Invalid Name.";
    }
    return 0;
}