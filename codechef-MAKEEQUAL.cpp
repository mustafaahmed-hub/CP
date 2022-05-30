#include <bits/stdc++.h>

using namespace std;
 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mn = 1000000;
        int mx =0;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            mx = max(mx,tmp);
            mn = min(mn,tmp);
        }
        
        cout<<mx-mn<<endl;
    }
    return 0;
}