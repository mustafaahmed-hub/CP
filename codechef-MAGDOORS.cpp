#include<bits/stdc++.h>
#define ll long long
using namespace std;
int solve(string &s){
    int idx = 0;
    int cnt = 0;
    while(idx<s.length()&&s[idx]=='1')
        idx++;
    if(idx<s.length()){
        cnt++;
        idx++;
    }
    for(;idx<s.length();idx++){
        if(s[idx-1]!=s[idx])
            cnt++;
    }
    return cnt;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        cout<<solve(s)<<endl; 
        
    }
    return 0;
}