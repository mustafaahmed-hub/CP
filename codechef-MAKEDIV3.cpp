#include<bits/stdc++.h>

using namespace std;
void solve(int n){
    for(int i=0;i<n-1;i++)
        cout<<3;
    int sum = 3* (n-1);
    if(sum%9!=0)
        cout<<9;
    else
        cout<<3;
    

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