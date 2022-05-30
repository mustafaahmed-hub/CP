#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans = -1;
        vector<int>a(n,0);
        vector<ll> pref_sum(n+1,0);
        vector<ll>req_amount(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            // a[i]%=k;
            pref_sum[i+1]= pref_sum[i]+a[i];
            req_amount[i+1] = req_amount[i]+(k-a[i]%k)%k;
        }
        // int mn = INT_MAX;
        
        // for(int i=1;i<=n;i++){
        //     int sum_req = req_amount[n]-req_amount[i];
        //     int sum_before_c = pref_sum[i];
        //     if(sum_before_c>=sum_req){
        //         int r = (sum_before_c-sum_req)%k;
        //         mn = min(mn,r);
        //     }
            
        // }
        cout<<pref_sum[n]%k<<endl;
        

    }
    return 0;
}