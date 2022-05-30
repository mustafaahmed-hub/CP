#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int n, string &s){
    string ans = "";
    string tmp = s.substr(0,1);
    int idx = 1;
    while(idx<n&&(s[idx]<s[idx-1]||(s[idx]==s[idx-1]&&s[idx]!=s[0]))){
        tmp+=s[idx];
        idx++;
    }
    ans = tmp;
    reverse(tmp.begin(),tmp.end());
    cout<<ans+tmp<<endl;
    return 0;
    
  
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        // vector<int>a;
        string s;
        cin>>n;
        // for(int i=0;i<n;i++){
        //     int tmp;
        //     cin>>tmp;
        //     a.push_back(tmp);
        // }
        cin>>s;
        // cout<<solve(n,a)<<endl;
        solve(n,s);
    }
    return 0;
}