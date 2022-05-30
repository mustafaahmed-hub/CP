#include<bits/stdc++.h>

using namespace std;
int solve(int n,int k,int *a){
    sort(a,a+n);
    int ans = a[k-1]-a[0];
    for(int i=0;i<n-k+1;i++){
        ans = min(ans,a[i+k-1]-a[i]);
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(n,k,a)<<endl;

    }
}