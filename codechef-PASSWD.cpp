#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool solve(string s){
    char sym[] = { '@', '#', '%', '&', '?' };
    int n = s.size();
    if(n<10)
        return false;
    bool flag = ((s[0]>='a'&&s[0]<='z')||(s[n-1]>='a'&&s[n-1]<='z'))? true : false;
    bool flag1 = false;
    bool flag2 = false;
    bool flag3 = false;
    for(int i=1;i<n-1;i++){
        if(s[i]>='a'&&s[i]<='z')
            flag = true;
        if(s[i]>='A'&&s[i]<='Z')
            flag1 = true;
        if(s[i]>='0'&&s[i]<='9')
            flag2 = true;
        for( char x : sym)
            if(x==s[i]){
                flag3 = true;
                break;
            }
    
        
    }

    return (flag&&flag1&&flag2&&flag3);
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans = solve(s)?"YES":"NO";
        cout<<ans<<endl;   
    }
}

