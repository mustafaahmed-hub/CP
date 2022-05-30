#include<bits/stdc++.h>
#define ll long long 
using namespace std;

string solve(int n,string s){
    char curr = 'T';
    for(int i=0;i<n;i++){
        if(s[i]=='.')
            continue;
        else if(s[i]=='H'){
            if(curr=='H')
                return "Invalid";
            curr = 'H';
        }
        else{
            if(curr=='T')
                return "Invalid";
            curr = 'T';
        }
        
    }
    if(curr!='T')
        return "Invalid";
    return "Valid";
    
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

