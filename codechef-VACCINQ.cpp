#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,x,y;
        cin>>n>>p>>x>>y;
        int a;
        int res = 0;
        for(int i=0;i<n;i++){
            cin>>a;
            if(i<p)
                res+=(a==0)?x:y;
        }
        cout<<res<<endl;
        
    }
}