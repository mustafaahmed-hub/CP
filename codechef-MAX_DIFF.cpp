#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int max_diff = s*((s<=n)) + (s>n)*(2*n-s);
        cout<<max_diff<<endl;
    }
}