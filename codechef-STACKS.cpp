#include<bits/stdc++.h>
#define ll long long
using namespace std;
void add(int x , vector<int>&ans){
    int st = 0;
    int end = ans.size()-1;
    int curr = INT_MAX;
    while(st<=end){
        int mid = st+(end-st)/2;
        if(x<ans[mid]){
            curr = min(mid,curr);
            end = mid - 1;
        }
        else
            st = mid+1;
    }
    if(curr==INT_MAX) 
        ans.push_back(x); 
    else
        ans[curr] = x;
    
}
void solve(int n, int *a){
    vector<int>ans;
    ans.push_back(a[0]);
    int st = 1;
    int end = n-1;
    for(int i=1;i<n;i++){
        add(a[i],ans);
    }
    cout<<ans.size()<<" ";
    for(int x : ans)
        cout<<x<<" ";
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        solve(n,a);
    }
}