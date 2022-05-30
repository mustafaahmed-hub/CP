#include<bits/stdc++.h>

using namespace std;
int solve(int n,int *a){
    sort(a,a+n);
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1])
            cnt++;
    }
    return cnt;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(n,a)<<endl;
    }
}