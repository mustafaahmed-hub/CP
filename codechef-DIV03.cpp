#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a[10],k;
        for(int i=0;i<10;i++)
            cin>>a[i];
        cin>>k;
        int idx = 9;
        while(a[idx]<=k&&idx>=0){
            
                k-=a[idx];
                a[idx] =0;
                idx--;
            
        }
        cout<<idx+1<<endl;
        
    }
}