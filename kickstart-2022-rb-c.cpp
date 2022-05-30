#include<bits/stdc++.h>
#define ll long long
using namespace std;
void change(vector<int>&v , int st  ,int end , int d, int k){
    
    // int d1 = min(v[st],v[end]);
    // int d2 = min(d-v[st],d-v[end]);
    // k = (d1>d2)?-1*k : k;
    for(int i=st;i<=end;i++)
        v[i] = (v[i]+k)%d;
}
ll solve(int n, int d, vector<int>&v,int k){
    int lptr =0;
    int rptr = n-1;
    ll cost =0;
    while(lptr<=rptr){
    while(v[lptr]==0&&lptr<n)
        lptr++;
    while(v[rptr]==0&&rptr>0)
        rptr--;
        

        if(lptr<=rptr){
            change(v,lptr,rptr,d,k);
            // cout<<lptr<<endl<<rptr<<endl;
            cost++;
        }
        }
        return cost;
}

int main(){
    int t;
    cin>>t;
    int x = 1;
    while(t--){
        int n,d;
        cin>>n>>d;
        vector<int>v(n);
        for(int i=0;i<n;i++)
            cin>>v[i];
        ll ans = solve(n,d,v);
        cout<<"Case #"<<x<<": "<<ans<<endl;
        x++;
    }
}