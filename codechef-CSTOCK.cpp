#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s,a,b,x;
        cin>>s>>a>>b>>x;
        double curr_price = s*((100.0+x)/100.0);
        // cout<<curr_price<<endl;
        if(curr_price>b||curr_price<a)
            cout<<"no"<<endl;
        else
            cout<<"yes"<<endl;
    }
    return 0;
}