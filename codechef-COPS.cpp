#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,x,y;
        cin>>m>>x>>y;
        vector<int>a(m);
        vector<int>range(102,0);
        for(int i=0;i<m;i++){
            cin>>a[i];
            int lr = (a[i]-x*y<1)?1:a[i]-x*y;
            int hr = (a[i]+x*y>100)?100:a[i]+x*y;
            range[lr]++;
            range[hr+1]--;

        }
        for(int i=1;i<=100;i++){
            range[i] = range[i-1]+range[i];
        }
        int cnt = 0;
        for(int i=1;i<=100;i++){
            // cout<<range[i]<<" ";
            if(range[i]==0)
                cnt++;
                }
        cout<<cnt<<endl;
    }
}