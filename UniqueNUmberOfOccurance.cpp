#include<bits/stdc++.h>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>temp;
        int count=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])        
                count++;
            else
                {
                    temp.push_back(count);
                    count=1;
                }
        }
        temp.push_back(count);
        sort(temp.begin(),temp.end());
        for(int i=1;i<temp.size();i++)
        {
            if(temp[i]==temp[i-1])
                return false;
        }
        return true;
    }
int main(){
    vector<int>arr{-3,0,1,-3,1,1,1,-3,10,0};
    cout<<uniqueOccurrences(arr);
    return 0;
}