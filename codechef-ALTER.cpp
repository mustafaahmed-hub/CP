#include<bits/stdc++.h>
#define ll long long
using namespace std;
int gcd( int a, int b){
    if(a==0||b==0)
        return max(a,b);
    return gcd(b,a%b);
}
bool solve(int a,int b,int p, int q){
     if(p%a!=0||q%b!=0)
        return false;
    int d1 = p/a;
    int d2 = q/b;
    if(abs(d1-d2)<=1)
        return true;
    return false;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,p,q;
        cin>>a>>b>>p>>q;
        string ans = solve(a,b,p,q)?"YES":"NO";
        cout<<ans<<endl;
    }
}