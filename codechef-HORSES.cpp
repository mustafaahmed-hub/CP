#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        int mn = 1000000000 ;
        
        for(int i=0;i<n-1;i++)
            mn = min(a[i+1]-a[i],mn);
        cout<<mn<<endl;
    }
}