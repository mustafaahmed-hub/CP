#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        string ans;
        if(x>=1&&x<100)
            ans = "Easy";
        else if(x>=100&&x<200)
            ans = "Medium";
        else
            ans = "Hard";
        cout<<ans<<endl;
    }
    return 0;
}