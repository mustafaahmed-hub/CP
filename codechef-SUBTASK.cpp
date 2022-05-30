#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int solved = 0;
        int first_m = 0;
        int res = 0;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            if(tmp==1)
                solved++;
            if(i<m&&tmp==1)
                first_m++;
        }
        if(solved==n)
            res = 100;
        else if(first_m==m)
            res = k;
        else 
            res = 0;
        cout<<res<<endl;
    }
}