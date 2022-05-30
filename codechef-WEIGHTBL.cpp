#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;
        int possible_min_change = x1*m;
        int possible_mx_change = x2*m;
        if(w2-w1>possible_mx_change||w2-w1<possible_min_change)
            cout<<0<<endl;
        else
            cout<<1<<endl;
    }
    return 0;
}