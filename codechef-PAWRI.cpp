#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        string c = "party";
        for(int i=0;i<(s.length());i++){
            // cout<<i<<endl;
            // cout<<s[i]<<" ";
            // cout<<s.length()<<endl;
            string tmp = s.substr(i,5);
            if(c.compare(tmp)==0)
                s.replace(i,5,"pawri");
        }
            
        cout<<s<<endl;
    }
    return 0;
}