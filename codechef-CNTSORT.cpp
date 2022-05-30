#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt[101] = {0};
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            cnt[x]++;
        }
        for(int i=1;i<101;i++)
            while(cnt[i]--)
                cout<<i<<" ";
        cout<<endl;
    }
}