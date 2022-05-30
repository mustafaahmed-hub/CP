#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>f(n);
        for(int i=0;i<n;i++)
            cin>>f[i];
        int distance =0;
        int idx =0;
        int fuel = f[0];
        f[0] = 0;
        while(fuel>0&&idx<n){
            fuel--;
            idx++;
            distance++;
            fuel+=f[idx];
            
        }
        distance+=fuel;
        cout<<distance<<endl;
    }
    return 0;
}