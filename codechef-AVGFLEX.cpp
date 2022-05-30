#include<bits/stdc++.h>

#define ll long long 

using namespace std;
int upperLimit(int idx,int n, int *a){
    int st = idx;
    int end = n-1;
    int ans = 0;
    while(st<=end){
        int mid = st+ (end-st)/2;
        if(a[mid]==a[idx]){
            st = mid+1;
            ans = max(ans,mid);
        }
        else
            end = mid-1;
    }
    return ans+1;
}

int solve(int n,int *a){
    sort(a,a+n);
    int ans = 0;
    for(int i=0;i<n;i++){
        if(2*upperLimit(i,n,a)>n)
            ans++;
    }    
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(n,a)<<endl;    
    }
}