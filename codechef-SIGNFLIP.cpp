#include<bits/stdc++.h>

using namespace std;
int solve(int n,int k,int *a){
    sort(a,a+n);
    int idx = 0;
    while(k--&& a[idx]<0)
        a[idx++]*=-1;
    int ans =0;
    int st = 0;
    int end = n-1;
    while(st<=end){
        int tmp =(a[st]>a[end])?a[st++] : a[end--];
        ans = max(ans + tmp, ans);
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