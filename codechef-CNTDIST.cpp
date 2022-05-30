#include<bits/stdc++.h>

using namespace std;

int solve(int n,int *a){
    sort(a,a+n);
    int cnt = 1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1])
            cnt++;
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    cout<<2<<endl<<solve(n,a)<<endl;

}