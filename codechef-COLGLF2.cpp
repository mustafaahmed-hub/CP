#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int>q(s);
        // vector<vector<int>>l;
        for(int i=0;i<s;i++)
            cin>>q[i];
        long long sum = 0;
        for(int i=0;i<s;i++){
            int e ;
            cin>>e;
            
            for(int j=0;j<e;j++){
                int tmp;
                cin>>tmp;
                sum+=(tmp);
            }
            // l.push_back(tmp);
            sum-=(e-1)*q[i];
        }
        cout<<sum<<endl;
    }
}