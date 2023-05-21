#include<iostream>
using namespace std;
int set_bit(int a ,int b)
{
    int count=0; 
    while(a){
        if(a&1!=0){
            count++;
        }
        a=a>>1;
    }
    while(b){
        if(b&1!=0){
            count++;
        }
        b=b>>1;
    }
    return count;
}
int main()
{
    int a,b;
    cin>>a >> b;
    cout<<"No of Bits : "<<set_bit(a,b);
    return 0;
}