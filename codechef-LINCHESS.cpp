#include<bits/stdc++.h>

using namespace std;

int solve(int n,int k, int *p){
    int mn = INT_MAX;
    int ans = -1;
    for(int i=0;i<n;i++){
        if(k%p[i]==0)
            if(mn>(k/p[i])){
                mn = k/p[i];
                ans = p[i];
            }
    }
    return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int p[n];
        for(int i=0;i<n;i++)
            cin>>p[i];
        cout<<solve(n,k,p)<<endl;
    }
}