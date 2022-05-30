#include<bits/stdc++.h>

using namespace std;
int solve(int n, int d, int *a){
    sort(a,a+n);
    int cnt = 0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]<=d){
            cnt++;
            i++;
        }
    }
    return cnt;
}

int main(){
    int t;
    t=1;
    while(t--){
        int n,d;
        cin>>n>>d;
        int l[n];
        for(int i=0;i<n;i++)
            cin>>l[i];
        cout<<solve(n,d,l);
    }
}