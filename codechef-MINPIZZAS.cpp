#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd( int a, int b){
    if(a==0||b==0)
        return max(a,b);
    return gcd(b,a%b);
}
int solve(int n,int k){
     return (n/gcd(n,k));

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<solve(n,k)<<endl;
    }
}