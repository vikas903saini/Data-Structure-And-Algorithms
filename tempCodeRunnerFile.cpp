#include<bits/stdc++.h>
using namespace std;
float convertCal(float temp)
{
    return (temp-32)*5/9;
}
int main(){
    float Temp;
    cout<<"Enter temprature : ";
    cin>>Temp;
    cout<<"Celsius : "<<convertCal(Temp);
    return 0;
}