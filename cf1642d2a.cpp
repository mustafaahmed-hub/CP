#include<bits/stdc++.h>

using namespace std;
int solve(int ax[3],int ay[3]){
    int ans = 0;
    if(ay[0]==ay[1]||ay[1]==ay[2]||ay[0]==ay[2]){
        int unique = 0;
        for(int i=0;i<3;i++)
            unique^=ay[i];
        int mx = max(ay[1],max(ay[0],ay[2]));
        if(mx>unique){
            for(int i=0;i<3;i++){
                if(mx==ay[i]){
                    ans = ax[i];
                    break;
                }
            }
            for(int i=2;i>=0;i--)
                if(mx==ay[i]){
                    ans -= ax[i];
                    break;
                }
        }
        if(ans<0)
            ans*=-1;
    }
    return ans;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int ax[3],ay[3];
        for(int i=0;i<3;i++)
            cin>>ax[i]>>ay[i];
        
        cout<<solve(ax,ay)<<endl;
    }
    return 0;
}