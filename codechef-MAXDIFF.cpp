#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int w[n];
        for(int i=0;i<n;i++){
            cin>>w[i];
        }
        sort(w,w+n);
        int mx = max(n-k,k);
        int mn = min(n-k,k);
        int ans = 0;
        int idx = n-1;
        while(mx--)
            ans+=w[idx--];
        while(mn--)
            ans-=w[idx--];
        cout<<ans<<endl;
    }
}