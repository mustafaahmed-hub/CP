#include<bits/stdc++.h>

using namespace std;
void solve(int n){
    int idx = 1;
    if(n%2!=0){
        cout<<idx<<" ";
        idx++;}
    for(;idx<=n;idx+=2){
        cout<<idx+1<<" "<<idx<<" ";
    }
        cout<<endl;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solve(n);
    }
}