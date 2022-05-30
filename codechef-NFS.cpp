#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int u,v,a,s;
        cin>>u>>v>>a>>s;
        if(v*v>=u*u-2*a*s)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}