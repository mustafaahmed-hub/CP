#include<bits/stdc++.h>

using namespace std;
bool solve(string &s){
    if(s.length()<3)
        return false;
    for(int i=0;i<s.length()-3;i++){
        string tmp = s.substr(i,3);
        if(tmp.compare("010")==0||tmp.compare("101")==0)
            return true;
    }
    return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = solve(s)?"Good":"Bad";
        cout<<ans<<endl;
    }
}