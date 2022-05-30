#include<bits/stdc++.h>

using namespace std;
int solve(int n,int *a){
    sort(a,a+n);
    int idx = n;
    int ans = 1;
    int flag = -1;
    if(n<4)
        return -1;
    while(idx>0){
        if(a[idx]==a[idx-1]&&flag<1){
            ans*=a[idx];
            idx--;
            flag++;
        }
        idx--;
    }
    if(flag!=1)
        return -1;
    return ans;
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