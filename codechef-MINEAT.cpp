#include<bits/stdc++.h>

#define ll long long 

using namespace std;
bool valid(int k,int h,int n,vector<int>&a){
    
    ll h_total = 0;
    for(int i=0;i<n;i++){
        h_total+= (a[i]/k);
        if(a[i]%k!=0)
            h_total++;
    }
    return ((h_total<=h)?  true : false);

}
int solve(int n,int h,vector<int>&a){
    int st = 1;
    int end = INT_MIN;
    for(int i=0;i<n;i++){
        
        end = max(end,a[i]);
    }
    int ans = INT_MAX;
    while(st<=end){
        
        int mid = st+(end-st)/2;
        // cout<<mid<<endl;
        if(valid(mid,h,n,a)){
            ans = min(ans,mid);
            end= mid-1;
        }
        else
            st = mid+1;
    }
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,h;
        cin>>n>>h;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(n,h,a)<<endl;    
    }
}