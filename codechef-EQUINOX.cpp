#include<bits/stdc++.h>
#define ll long long 
using namespace std;

string solve(int n,int a,int b,string *s){
    ll sp = 0;
    ll ap = 0;
    string hostWord = "EQUINOX";
    for(int i=0;i<n;i++){
        int flag = 1;
        for(char x : hostWord){
            if(x==s[i][0]){
                flag = 0;
                sp+=a;
                break;
            }
        }
        if(flag)
            ap+=b;
    }
    if(ap==sp)
        return "DRAW";
    return (sp>ap)?"SARTHAK":"ANURADHA";
        
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        string s[n];
        for(int i=0;i<n;i++)
            cin>>s[i];
        cout<<solve(n,a,b,s)<<endl;   
    }
}

