#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>n>>x;
        int best = 0;
        for(int i=0;i<n;i++){
            int s,r;
            cin>>s>>r;
            best = max((x>=s)*r,best);
        }
        cout<<best<<endl;
    }
}
