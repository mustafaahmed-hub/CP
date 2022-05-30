#include<bits/stdc++.h>

using namespace std;
int solve(int n,int *h){
    sort(h,h+n);
    int mx = h[n-1];
    for(int i=1;i<=(n+1)/2;i++){
        
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h[n];
        for(int i=0;i<n;i++)
            cin>>h[i];
        solve(n,h);
    }
}