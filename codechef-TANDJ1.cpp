#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,k;
        cin>>a>>b>>c>>d>>k;
        int distance = abs(c-a)+abs(d-b);
        if(distance<=k&&(k-distance)%2==0)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}