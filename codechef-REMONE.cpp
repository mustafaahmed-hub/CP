#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n] , b[n-1];
        ll sum1  =0;
        ll sum2 = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum1+=a[i];
            }
        for(int i=0;i<n-1;i++){
            cin>>b[i];
            sum2+=b[i];
        }
        ll ans = 100000000000;
        for(int i=0;i<n;i++){
            ans = (((sum2-sum1+a[i])%(n-1)==0)&& ((sum2-sum1+a[i])>0)) ? min(ans,(sum2-sum1+a[i])/(n-1)) : ans;
        }
        cout<<ans<<endl;

        
    }
}