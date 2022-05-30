#include<bits/stdc++.h>

using namespace std;
int solve(int n,int x,int *a){
    sort(a,a+n);
    int type = 1;
    for(int i=0;i<n-1;i++)
        if(a[i+1]!=a[i])
            type++;
    return min(n-x,type);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<solve(n,x,a)<<endl;

    }
}