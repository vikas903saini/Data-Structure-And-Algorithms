#include<bits/stdc++.h>
using namespace std;
int main()
{
    int value;
    cin>>value;
    int n100,n50,n20,n1;
    n100=n50=n20=n1=0;
        switch(value>=100)
        {
            case 1: n100=value/100;
                    value=value-n100*100;
                    break;
        }
    switch(value>=50)
        {
            case 1: n50=value/50;
                    value=value-n50*50;
                    break;
        }
    switch(value>=20)
        {
            case 1: n20=value/20;
                    value=value-n20*20;
                    break;
        }
    switch(value>=1)
        {
            case 1: n1=value/1;
                    break;
        }
    
    cout<<"notes of 100 : "<<n100<<endl;
    cout<<"notes of 50 : "<<n50<<endl;
    cout<<"notes of 20 : "<<n20<<endl;
    cout<<"notes of 1 : "<<n1<<endl;
    return 0;
}
