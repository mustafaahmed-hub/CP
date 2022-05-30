#include <bits/stdc++.h>
#define ll long long
using namespace std;

int solve(int a, int b){
    int mn = min(a,b);
    int mx = max(a,b);
    
        int f = mx/3;
        int r = mx%3;
        f = min(f,mn);
        return f + ((mn-f)+r)/4;
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout<<solve(a,b)<<endl;
    }
    return 0;
}

