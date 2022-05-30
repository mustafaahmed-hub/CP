#include<bits/stdc++.h>

using namespace std;

vector<int> solve(int n,int m,vector<vector<int>>&arr){
    //sort each row
    vector<int>ans;
    for(int i=0;i<n;i++)
        sort(arr[i].begin(),arr[i].end());
    map<long long ,int>mp;
    for(int i=0;i<n;i++){
        long long number =0;
        for(int j=0;j<m;j++){
            number = number*10+arr[i][j];
        }
        mp[number] = i;
    }
    //iterate map
    for(auto x:mp)
        ans.push_back(x.second);
    reverse(ans.begin(),ans.end());
    return ans;

    
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>arr(n);
    for(int i=0;)
}