#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n, vector<int>&a){
    int arr[101] = {0};
    int ans = 0;
    for(int i=0;i<n;i++)
        arr[abs(a[i])]++;
    for(int i=1;i<101;i++)
        ans+=min(2,arr[i]);
    ans+=min(arr[0],1);
    cout<<ans<<endl;
    return 0;
  
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