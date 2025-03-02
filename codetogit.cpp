#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c;
    cin>>n;
    vector<vector<int>>arr;
    for(int i=0;i<n;i++){
        vector<int>mini;
        for(int i=0;i<n;i++){
            cin>>c;
            mini.push_back(c);
        }
        arr.push_back(mini);
    }
    int res=0;
    for(int i=0;i<n;i++){
        res+=arr[i][i];
        res+=arr[i][n-i-1];
        res+=arr[n/2][i];
        res+=arr[i][n/2];
    }
    res-=3*arr[n/2][n/2];
    cout<<res;
}