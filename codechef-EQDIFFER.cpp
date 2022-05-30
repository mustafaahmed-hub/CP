#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>freq;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            freq[x]++;
        }
        int mx = 0;
        int tmp = (n>2)?n-2:0;
        for(pair<int,int> x : freq){
            mx = max(x.second,mx);
        }
        cout<<min(n-mx,tmp)<<endl;
        
            
    }
}