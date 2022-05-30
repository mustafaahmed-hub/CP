#include<bits/stdc++.h>


using namespace std;
bool solve(int n,int *a,int *b){
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])
            return false;
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        string ans = (solve(n,a,b)?"yes":"no");
        cout<<ans<<endl;
    }
}