#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n, vector<int>&a){
    vector<int>ans;  
    int mx = 0 ;
    int pl = 0, pr = n-1;
    if(a[pl]>a[pr]){
        mx = a[pl];
        pl++;
    }
    else{
        mx = a[pr];
        pr--;
    }

    for(int x:a)
        if(mx<x){
            cout<<-1<<endl;
            return 0;
        }
    while(pl<pr){

    }
    
    ans.push_back(mx);
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

