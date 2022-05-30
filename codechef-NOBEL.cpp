#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n);
        int cnt = 0;
        int flag[m+1];
        memset(flag,0,sizeof(flag));
        for(int i=0;i<n;i++){
            cin>>a[i];
            flag[a[i]] = 1;
        }
        
        
        for(int i=1;i<=m;i++)
            if(flag[i]==0){
                cnt++;
                break;
            }
        if(cnt>0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}