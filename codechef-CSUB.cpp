#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll solve(int n,string &s){
    ll suffixOne[n+1];
    memset(suffixOne,0,sizeof(suffixOne));
    for(int i=n-1;i>=0;i--){
        suffixOne[i] = suffixOne[i+1] + s[i]-'0';
    }
    ll ans = 0;
    for(int i=0;i<n;i++)
        if(s[i]=='1')
            ans+= (suffixOne[i]);
    return ans;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<solve(n,s)<<endl;   
    }
}

