#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int req1,req2;
        cin>>req1>>req2;
        int op11,op12,op21,op22;
        cin>>op11>>op12>>op21>>op22;
        if((req1==op11||req1==op12)&&(req2==op12||req2==op11))
            cout<<1<<endl;
        else if((req1==op21||req1==op22)&&(req2==op22||req2==op21))
            cout<<2<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}