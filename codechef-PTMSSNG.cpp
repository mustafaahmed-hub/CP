#include<bits/stdc++.h>

using namespace std;
pair<int,int> solve(int n,vector<pair<int,int>>&a){
    pair<int,int> ans = {0,0};
    for(int i=0;i<4*n-1;i++){
        ans.first^=a[i].first;
        ans.second^=a[i].second;
    
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,int>>coordinate(4*n-1);
        for(int i=0;i<(4*n-1);i++){
            cin>>coordinate[i].first>>coordinate[i].second;
        }

        pair<int,int> p = solve(n,coordinate);
        cout<<p.first<<" "<<p.second<<endl;
    }
}