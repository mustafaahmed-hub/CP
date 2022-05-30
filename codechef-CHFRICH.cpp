#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x;
        cin>>a>>b>>x;
        int ans = ((b-a)%x!=0)+(b-a)/x;
        cout<<ans<<endl;
    }
    return 0;
}