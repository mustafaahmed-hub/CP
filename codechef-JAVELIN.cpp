#include<bits/stdc++.h>

using namespace std;
bool comp(pair<int,int> a, pair<int,int> b){
    return a.second<b.second;
}
void solve(int n,int m,int x,pair<int,int> *a){
    sort(a,a+n,comp);
    int idx = n-1;
    vector<int>ans;
    while(a[idx].second>=m&&idx>=0){
        ans.push_back(a[idx].first);
        idx--;
    }
    while(ans.size()<x&&idx>=0){
        ans.push_back(a[idx].first);
        idx--;
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<" ";
    for(int x: ans)
        cout<<x<<" ";
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m>>x;
        pair<int,int> a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].second;
            a[i].first = i+1;
        }
        solve(n,m,x,a);
        
        
    }
}