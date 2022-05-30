#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m,k;
    cin>>n>>m>>k;
    int res =0;
    for(int i=0;i<n;i++){
            int tij,qi;
            int sum = 0;
        for(int j=0;j<k;j++){
            cin>>tij;
            sum+=tij;
        }
        cin>>qi;
        if(sum>=m&&qi<=10)
            res++;
    }
    cout<<res<<endl;
}