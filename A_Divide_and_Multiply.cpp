#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(int n, vector<int>&a){
  ll mx = 0;
  int cnt = 0;
    ll sum = 0;
    for(int i=0;i<n;i++){  
    
            while(a[i]%2==0){
                a[i]/=2;
                cnt++;
            }
        
    }
    for(int x:a){
        mx = max((int)mx,x);
    }
    sum+=(mx*pow(2,cnt));
    for(int x:a){
        if(mx!=x)
            sum+=x;
        else
            mx = -1;
    }
    
    cout<<sum<<endl;



}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<int>a;
        cin>>n;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            a.push_back(tmp);
        }
        // cout<<solve(n,a)<<endl;
        solve(n,a);
    }
    return 0;
}