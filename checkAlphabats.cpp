#include<bits/stdc++.h>
using namespace std;
void checkCharacter(char ch)
{
    if(ch>='a' && ch<='z')
        cout<<"Character is Lower case ";
    else if(ch>='A' && ch<='Z')
        cout<<"Character is Upper Case ";
    else
        cout<<"Character is Number ";
}
int main(){
    char ch;
    cout<<"enter a character : ";
    cin>>ch;
    checkCharacter(ch);
    return 0;
}