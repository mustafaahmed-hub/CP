#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<((n+1)%4==0||(n%4==0))*(n)+(n%4!=0&&(n+1)%4!=0)*(n-1)<<endl;
    }
    return 0;

}