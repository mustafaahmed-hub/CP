#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt = 0;
        int freq[8] = {0};
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            if(tmp<=7&&freq[tmp]==0)
                freq[tmp] = i+1;
        }
        int mx = 0;
        for(int i=0;i<8;i++)
            mx = max(mx,freq[i]);
        cout<<mx<<endl;
    }
    return 0;
}