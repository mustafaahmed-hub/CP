#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        int idx = 0;
        int mn =INT_MAX;
        int mx = 0;
        int cnt = 0;
        while(idx<n){
            if(a[idx]<mn){
                mn = a[idx];
                cnt++;
            }
            idx++;
        }
        cout<<cnt<<endl;
    }
}