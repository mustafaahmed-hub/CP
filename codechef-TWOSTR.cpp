#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool solve(string &s1,string &s2){
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]&&s1[i]!='?'&&s2[i]!='?')
            return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        
        string ans = solve(s1,s2)? "Yes":"No";
        cout<<ans<<endl; 
        
    }
    return 0;
}