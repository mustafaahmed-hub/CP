#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool add(ll month, ll l,ll w,vector<pair<int,int>>&hr){
    ll total = 0;
    for(int i=0;i<hr.size();i++){
        total+= (hr[i].first + hr[i].second*month)>=l ?(hr[i].first + hr[i].second*month):0;
        if(total>=w)
            return true; 
    }
    return false;
}
ll solve(ll n, ll w, ll l, vector<pair<int,int>>&hr){
    ll st = 1;
    ll end = w;
    ll ans = end;
    while(st<=end){
        ll mid = st+(end-st)/2;
        if(add(mid,l,w,hr)){
            ans = min(mid,ans);
            end = mid-1;
        }
        else
            st = mid+1;
    }
    return ans;
    
}

int main(){
   
        ll w,l;
        int n;
        cin>>n>>w>>l;
        vector<pair<int,int>>hr(n);
        for(int i=0;i<n;i++)
            cin>>hr[i].first>>hr[i].second;
        cout<<solve(n,w,l,hr)<<endl;
    
}